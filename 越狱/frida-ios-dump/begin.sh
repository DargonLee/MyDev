#!/bin/bash

read -p "确认手机是否连接到电脑? > "
# ORIGINPATH=`pwd`
# echo $ORIGINPATH
echo "开始获取设备应用列表..."
python3 dump.py -l
# list=`python3 dump.py -l`
# echo $list

echo "请在上面列表中选择需要砸壳应用的包名,如果需要砸壳多个请以逗号分割开."
echo "例如:com.apple.sidecar,com.baoyun.hanju"
echo "\n"
read -p "请输入: > " apps
# echo "Apps：$apps"
array=(${apps//,/ })  
 
for var in ${array[@]}
do
   echo "开始砸壳应:${var}"
   python3 dump.py $var
done
