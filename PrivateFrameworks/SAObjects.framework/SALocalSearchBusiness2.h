/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSDictionary, NSString, NSURL, SALocalSearchOperationHours, SALocation;

@interface SALocalSearchBusiness2 : SADomainObject <SAAceSerializable> {
}

@property(retain) SALocation * address;
@property(copy) NSURL * businessUrl;
@property(copy) NSArray * categories;
@property(copy) NSString * currencySymbol;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(copy) NSString * descriptionText;
@property(copy) NSString * extSessionGuid;
@property(readonly) unsigned long long hash;
@property(copy) NSDictionary * identifierMap;
@property(copy) NSString * name;
@property(copy) NSArray * offerLists;
@property(retain) SALocalSearchOperationHours * operationHours;
@property(copy) NSString * phoneNumber;
@property(copy) NSArray * photoList;
@property(copy) NSString * priceRange;
@property(copy) NSArray * reviewList;
@property(readonly) Class superclass;

+ (id)afui_mapsURLForLocalSearchBusiness2s:(id)arg1;
+ (id)business2;
+ (id)business2WithDictionary:(id)arg1 context:(id)arg2;
+ (id)siriui_mapsURLForLocalSearchBusiness2s:(id)arg1;

- (id)address;
- (id)afui_mapItemRepresentation;
- (id)afui_mapsURL;
- (id)businessUrl;
- (id)categories;
- (id)currencySymbol;
- (id)descriptionText;
- (id)encodedClassName;
- (id)extSessionGuid;
- (id)groupIdentifier;
- (id)identifierMap;
- (id)name;
- (id)offerLists;
- (id)operationHours;
- (id)phoneNumber;
- (id)photoList;
- (id)priceRange;
- (id)reviewList;
- (void)setAddress:(id)arg1;
- (void)setBusinessUrl:(id)arg1;
- (void)setCategories:(id)arg1;
- (void)setCurrencySymbol:(id)arg1;
- (void)setDescriptionText:(id)arg1;
- (void)setExtSessionGuid:(id)arg1;
- (void)setIdentifierMap:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOfferLists:(id)arg1;
- (void)setOperationHours:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setPhotoList:(id)arg1;
- (void)setPriceRange:(id)arg1;
- (void)setReviewList:(id)arg1;
- (id)siriui_mapItemRepresentation;
- (id)siriui_mapsURL;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;

@end
