//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary;

@protocol TXLivePushJSAdapterDelegate <NSObject>

@optional
- (void)onInsertLogView:(unsigned int)arg1;
- (void)onPushNetStatus:(NSDictionary *)arg1 pusherId:(unsigned int)arg2;
- (void)onPushEvent:(int)arg1 pusherId:(unsigned int)arg2 param:(NSDictionary *)arg3;
@end

