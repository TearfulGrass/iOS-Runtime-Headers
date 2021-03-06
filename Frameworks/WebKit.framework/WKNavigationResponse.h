/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@class NSURLRequest, NSURLResponse, WKFrameInfo;

@interface WKNavigationResponse : NSObject {
    struct RetainPtr<WKFrameInfo> { 
        void *m_ptr; 
    struct RetainPtr<NSURLRequest> { 
        void *m_ptr; 
    struct RetainPtr<NSURLResponse> { 
        void *m_ptr; 
    } _frame;
    } _request;
    } _response;
    bool_canShowMIMEType;
}

@property(readonly) WKFrameInfo * _frame;
@property(readonly) NSURLRequest * _request;
@property bool canShowMIMEType;
@property(getter=isForMainFrame,readonly) bool forMainFrame;
@property(copy) NSURLResponse * response;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_frame;
- (id)_request;
- (bool)canShowMIMEType;
- (id)description;
- (bool)isForMainFrame;
- (id)response;
- (void)setCanShowMIMEType:(bool)arg1;
- (void)setResponse:(id)arg1;

@end
