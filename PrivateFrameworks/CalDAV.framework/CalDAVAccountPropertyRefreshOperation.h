/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class <CalDAVAccountPropertyRefreshDelegate>;

@interface CalDAVAccountPropertyRefreshOperation : CalDAVOperation {
    bool_fetchPrincipalSearchProperties;
}

@property <CalDAVAccountPropertyRefreshDelegate> * delegate;
@property bool fetchPrincipalSearchProperties;

- (bool)fetchPrincipalSearchProperties;
- (void)getAccountPropertiesTask:(id)arg1 completedWithError:(id)arg2;
- (void)refreshProperties;
- (void)setFetchPrincipalSearchProperties:(bool)arg1;

@end
