//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class FWMessageModel, FWTaskFoucesModel, NSArray, NSDictionary, NSNumber, NSString, RCMessageContent;

@protocol FWIMClientDelegate
+ (int)getGroupLimitDefault;
+ (int)getGroupLimit;
+ (void)didTapPersonDetailInMessageCell:(NSString *)arg1;
+ (void)didTapUrlInMessageCell:(NSString *)arg1;
+ (_Bool)canGetTaskFoucesModelWithMsgId:(NSString *)arg1;
+ (_Bool)getCellDisplayIsDisableMsgRead;
+ (_Bool)getMsgAudioMode;
+ (double)tabbarHeight;
+ (_Bool)getMsgThumbnailMode;
+ (_Bool)isCansendMsgWithUserid:(NSString *)arg1;
+ (void)showAlertSysPubWithContent:(NSString *)arg1;
+ (_Bool)checkInfoMsg:(RCMessageContent *)arg1 type:(long long)arg2;
+ (NSArray *)getExpressionList;
+ (NSString *)getCurrenLanguage;
+ (NSArray *)getConversationCanDeleAndSetTops;
+ (_Bool)judgeMesageTypeWhichIsTipMessage:(RCMessageContent *)arg1;
+ (void)removeConversationlistAtsombodysForTargid:(NSString *)arg1;
+ (void)saveConversationlistAtsombodysForTargid:(NSString *)arg1 msgid:(NSString *)arg2;
+ (void)refreshChatVC;
+ (void)refreshConversationList;
+ (void)updateMessageStatusWithMessageId:(NSString *)arg1 senderId:(NSArray *)arg2 needPost:(_Bool)arg3;
+ (void)insertOrUpdateFocusTaskModel:(FWTaskFoucesModel *)arg1 dingDic:(NSDictionary *)arg2 isneed:(_Bool)arg3;
+ (void)insertCountCommandMessageWithArray:(NSArray *)arg1 msgId:(NSString *)arg2;
- (void)willSendMessage;
- (void)getReadAttributedStringWith:(FWMessageModel *)arg1 isDisable:(_Bool)arg2 isAsync:(_Bool)arg3 isReply:(_Bool)arg4 Comple:(void (^)(NSMutableAttributedString *, NSString *, _Bool, _Bool))arg5 tapAction:(void (^)(NSString *, long long))arg6;
- (void)updateCachePersonNameWithbaseUserId:(NSString *)arg1 userName:(NSString *)arg2;
- (_Bool)isNeedLocalUnreadStatus:(NSString *)arg1;
- (NSString *)localizedStringForKey:(NSString *)arg1;
- (void)cacheFileWithlocalPath:(NSString *)arg1 fileid:(NSString *)arg2;
- (NSNumber *)getMsgIdWith:(NSString *)arg1 tarId:(NSString *)arg2;
- (void)insertMessageUnreadCount:(int)arg1 msgId:(NSString *)arg2;
- (NSString *)getUsernameWithUserid:(NSString *)arg1 complete:(void (^)(NSString *))arg2;
- (void)insertCountCommandMessageWithArray:(NSArray *)arg1 msgId:(NSString *)arg2;
- (NSString *)getTargetIdNoticeType:(long long)arg1;
- (_Bool)foundNoti:(NSString *)arg1 type:(long long)arg2;
- (void)getConversationNotificationStatus:(NSString *)arg1 success:(void (^)(unsigned long long))arg2;
- (void)setConversationNotificationStatus:(unsigned long long)arg1 targetId:(NSString *)arg2 success:(void (^)(void))arg3;
@end

