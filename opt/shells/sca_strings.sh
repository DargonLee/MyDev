#!/bin/bash
set -euo pipefail

# ============================
# 用法：
#   ./scan_pods_binary_strings.sh PATTERN1 [PATTERN2 ...]
#
# 示例：
#   ./scan_pods_binary_strings.sh BEGINPRIVATEKEY
#   ./scan_pods_binary_strings.sh "BEGIN PRIVATE KEY" "RSA PRIVATE KEY"
# ============================

if [ "$#" -lt 1 ]; then
  echo "Usage: $0 PATTERN1 [PATTERN2 ...]"
  exit 1
fi

PATTERNS=("$@")

echo "🔍 Scanning Pods binaries for patterns:"
for p in "${PATTERNS[@]}"; do
  echo "  - $p"
done
echo

scan_file() {
  local file="$1"
  for pat in "${PATTERNS[@]}"; do
    if strings -a -n 6 "$file" | grep -Hn "$pat" >/dev/null; then
      strings -a -n 6 "$file" | grep -Hn "$pat"
      echo ">>> HIT [$pat] in $file"
      echo
    fi
  done
}

export -f scan_file

find . -type f \( -name "*.a" -o -name "*.framework" -o -name "*.xcframework" \) -print0 | \
while IFS= read -r -d '' path; do
  if [[ "$path" == *.framework ]]; then
    bin="$path/$(basename "$path" .framework)"
    [[ -f "$bin" ]] && scan_file "$bin"

  elif [[ "$path" == *.xcframework ]]; then
    find "$path" -type f -maxdepth 6 | while read -r f; do
      file "$f" | grep -q "Mach-O" && scan_file "$f"
    done

  else
    scan_file "$path"
  fi
done

