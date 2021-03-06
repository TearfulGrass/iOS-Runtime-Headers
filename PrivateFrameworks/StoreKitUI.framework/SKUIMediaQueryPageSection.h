/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class IKViewElementFactory, JSContext, JSValue, MPMediaQuery, NSMutableDictionary, NSString, SKUIMediaQueryViewElement, SKUIViewElementLayoutContext;

@interface SKUIMediaQueryPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate> {
    JSValue *_cellFactoryMethod;
    SKUIViewElementLayoutContext *_cellLayoutContext;
    JSContext *_cellScriptContext;
    MPMediaQuery *_query;
    long long _queryStyle;
    id _styleFactory;
    SKUIMediaQueryViewElement *_viewElement;
    IKViewElementFactory *_viewElementFactory;
    NSMutableDictionary *_viewElements;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (Class)_cellClassForViewElement:(id)arg1;
- (void)_enumerateVisibleViewElementsUsingBlock:(id)arg1;
- (id)_viewElementWithIndexPath:(id)arg1;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize { double x1; double x2; })cellSizeForIndexPath:(id)arg1;
- (id)initWithPageComponent:(id)arg1;
- (long long)numberOfCells;
- (void)willAppearInContext:(id)arg1;

@end
