/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOPDAnalyticMetadata, GEOPDClientMetadata, GEOPDPlaceRequestParameters, NSMutableArray;

@interface GEOPDPlaceRequest : PBRequest <NSCopying> {
    struct { 
        unsigned int requestType : 1; 
        unsigned int suppressResultsRequiringAttribution : 1; 
    GEOPDAnalyticMetadata *_analyticMetadata;
    GEOPDClientMetadata *_clientMetadata;
    NSMutableArray *_displayLocales;
    } _has;
    GEOPDPlaceRequestParameters *_placeRequestParameters;
    int _requestType;
    NSMutableArray *_requestedComponents;
    NSMutableArray *_spokenLocales;
    bool_suppressResultsRequiringAttribution;
}

@property(retain) GEOPDAnalyticMetadata * analyticMetadata;
@property(retain) GEOPDClientMetadata * clientMetadata;
@property(retain) NSMutableArray * displayLocales;
@property(readonly) bool hasAnalyticMetadata;
@property(readonly) bool hasClientMetadata;
@property(readonly) bool hasPlaceRequestParameters;
@property bool hasRequestType;
@property bool hasSuppressResultsRequiringAttribution;
@property(retain) GEOPDPlaceRequestParameters * placeRequestParameters;
@property int requestType;
@property(retain) NSMutableArray * requestedComponents;
@property(retain) NSMutableArray * spokenLocales;
@property bool suppressResultsRequiringAttribution;

- (void)addDisplayLocale:(id)arg1;
- (void)addRequestedComponent:(id)arg1;
- (void)addSpokenLocale:(id)arg1;
- (id)analyticMetadata;
- (void)clearDisplayLocales;
- (void)clearRequestedComponents;
- (void)clearSpokenLocales;
- (id)clientMetadata;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayLocaleAtIndex:(unsigned long long)arg1;
- (id)displayLocales;
- (unsigned long long)displayLocalesCount;
- (bool)hasAnalyticMetadata;
- (bool)hasClientMetadata;
- (bool)hasPlaceRequestParameters;
- (bool)hasRequestType;
- (bool)hasSuppressResultsRequiringAttribution;
- (unsigned long long)hash;
- (id)initWithCanonicalLocationSearchQueryString:(id)arg1 traits:(id)arg2;
- (id)initWithCoordinateHint:(struct { double x1; double x2; })arg1 addressHint:(id)arg2 placeNameHint:(id)arg3 traits:(id)arg4;
- (id)initWithForwardGeocodeAddress:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)initWithForwardGeocodeAddressString:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)initWithMUIDs:(id)arg1 includeETA:(bool)arg2 traits:(id)arg3;
- (id)initWithMapItemToRefine:(id)arg1 traits:(id)arg2;
- (id)initWithMerchantCode:(id)arg1 paymentNetwork:(id)arg2 transactionDate:(id)arg3 transactionLocation:(id)arg4 traits:(id)arg5;
- (id)initWithReverseGeocodeCoordinate:(struct { double x1; double x2; })arg1 includeEntryPoints:(bool)arg2 includeETA:(bool)arg3 traits:(id)arg4;
- (id)initWithSearchQuery:(id)arg1 entryMetadata:(id)arg2 metadata:(id)arg3 maxResults:(unsigned int)arg4 suppressResultsRequiringAttribution:(bool)arg5 includeETA:(bool)arg6 traits:(id)arg7;
- (id)initWithSearchURLQuery:(id)arg1 coordinate:(struct { double x1; double x2; })arg2 maxResults:(unsigned int)arg3 traits:(id)arg4;
- (id)initWithSearchURLQuery:(id)arg1 coordinate:(struct { double x1; double x2; })arg2 muid:(unsigned long long)arg3 resultProviderId:(int)arg4 maxResults:(unsigned int)arg5 traits:(id)arg6;
- (id)initWithTraits:(id)arg1 count:(unsigned int)arg2 includeETA:(bool)arg3 includeEntryPoints:(bool)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isForwardGeocoderRequest;
- (void)mergeFrom:(id)arg1;
- (id)placeRequestParameters;
- (bool)readFrom:(id)arg1;
- (int)requestType;
- (unsigned int)requestTypeCode;
- (id)requestedComponentAtIndex:(unsigned long long)arg1;
- (id)requestedComponents;
- (unsigned long long)requestedComponentsCount;
- (Class)responseClass;
- (void)setAnalyticMetadata:(id)arg1;
- (void)setClientMetadata:(id)arg1;
- (void)setDisplayLocales:(id)arg1;
- (void)setHasRequestType:(bool)arg1;
- (void)setHasSuppressResultsRequiringAttribution:(bool)arg1;
- (void)setPlaceRequestParameters:(id)arg1;
- (void)setRequestType:(int)arg1;
- (void)setRequestedComponents:(id)arg1;
- (void)setSpokenLocales:(id)arg1;
- (void)setSuppressResultsRequiringAttribution:(bool)arg1;
- (id)spokenLocaleAtIndex:(unsigned long long)arg1;
- (id)spokenLocales;
- (unsigned long long)spokenLocalesCount;
- (bool)suppressResultsRequiringAttribution;
- (void)writeTo:(id)arg1;

@end
