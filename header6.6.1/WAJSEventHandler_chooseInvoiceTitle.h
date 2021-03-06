//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAJSEventHandler_BaseEvent.h"

#import "IMyInvoiceLogicMgrExt-Protocol.h"
#import "IWebviewAskAuthorizationLogicExt-Protocol.h"
#import "MyInvoiceInfoViewControllerDelegate-Protocol.h"
#import "MyInvoiceListViewControllerDelegate-Protocol.h"

@class NSString;

@interface WAJSEventHandler_chooseInvoiceTitle : WAJSEventHandler_BaseEvent <IWebviewAskAuthorizationLogicExt, IMyInvoiceLogicMgrExt, MyInvoiceListViewControllerDelegate, MyInvoiceInfoViewControllerDelegate>
{
}

- (void)OnJsapiAddInvoiceFail;
- (void)OnJsapiAddInvoiceCancel;
- (void)OnJsapiAddInvoiceSuccess:(id)arg1;
- (void)onChooseCancel;
- (void)onChooseSuccess:(id)arg1;
- (void)chooseFailed;
- (void)OnGetInvoiceRet:(_Bool)arg1 andResult:(id)arg2 fromScene:(unsigned int)arg3;
- (void)OnAskAuthorizationFailure:(id)arg1 ForAuthInfo:(id)arg2;
- (void)OnAskAuthorizationSuccessForAuthInfo:(id)arg1;
- (void)startInvoice;
- (void)handleJSEvent:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

