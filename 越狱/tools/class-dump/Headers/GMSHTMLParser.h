//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXMLParserDelegate-Protocol.h"

@class NSMutableAttributedString, NSString, NSURL;

@interface GMSHTMLParser : NSObject <NSXMLParserDelegate>
{
    NSURL *url;
    _Bool _includeHyperlinks;
    NSMutableAttributedString *_result;
}

@property(nonatomic) _Bool includeHyperlinks; // @synthesize includeHyperlinks=_includeHyperlinks;
@property(readonly, nonatomic) NSMutableAttributedString *result; // @synthesize result=_result;
- (void).cxx_destruct;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

