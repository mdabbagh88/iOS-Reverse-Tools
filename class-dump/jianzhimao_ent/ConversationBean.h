//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ChatBaseBean.h"

@class EMConversation, IMUserInfoBean, NSString;

@interface ConversationBean : ChatBaseBean
{
    EMConversation *_easeMobConversation;
    IMUserInfoBean *_userInfo;
    NSString *_groupId;
}

@property(retain, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(retain, nonatomic) IMUserInfoBean *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) EMConversation *easeMobConversation; // @synthesize easeMobConversation=_easeMobConversation;
- (void).cxx_destruct;
- (id)initWithEaseMobConversation:(id)arg1 UserInfo:(id)arg2 groupId:(id)arg3;
- (id)initWithEaseMobConversation:(id)arg1 groupId:(id)arg2;
- (id)initWithEaseMobConversation:(id)arg1 UserInfo:(id)arg2;

@end

