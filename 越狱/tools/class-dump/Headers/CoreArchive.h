//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CoreArchive : NSObject
{
}

+ (id)unarchiveObjectWithFile:(id)arg1;
+ (_Bool)removeRootObjectWithFile:(id)arg1;
+ (_Bool)archiveRootObject:(id)arg1 toFile:(id)arg2;
+ (_Bool)boolForKey:(id)arg1;
+ (void)setBool:(_Bool)arg1 key:(id)arg2;
+ (double)floatForKey:(id)arg1;
+ (void)setFloat:(double)arg1 key:(id)arg2;
+ (long long)intForKey:(id)arg1;
+ (void)setInt:(long long)arg1 key:(id)arg2;
+ (void)removeStrForKey:(id)arg1;
+ (id)strForKey:(id)arg1;
+ (void)setStr:(id)arg1 key:(id)arg2;

@end

