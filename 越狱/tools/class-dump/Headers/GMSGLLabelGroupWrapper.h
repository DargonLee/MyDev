//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSThread;

@interface GMSGLLabelGroupWrapper : NSObject
{
    struct GLLabelGroup *_labelGroup;
    struct Mutex _labelGroupMutex;
    NSThread *_thread;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)initOnOwningThread;
- (void)handleResource:(id)arg1;
- (void)resetLabelGroup;
- (id)initWithLabelGroup:(struct GLLabelGroup *)arg1 thread:(id)arg2;

@end

