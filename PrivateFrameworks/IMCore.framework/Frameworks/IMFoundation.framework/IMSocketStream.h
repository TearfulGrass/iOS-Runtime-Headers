/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

@class NSMutableData, NSTimer;



@interface IMSocketStream : NSObject 
{
    struct __CFReadStream { } *_in;
    struct __CFWriteStream { } *_out;
    struct { 
        NSInteger version; 
        void *info; 
        int (*retain)(); 
        int (*release)(); 
        int (*copyDescription)(); 
    } _streamCallbackContext;
    char *_readBuffer;
    NSMutableData *_outBuffer;
    struct __CFHTTPMessage { } *_httpResponse;
    NSTimer *_connectTimer;
    double _connectTimeout;
    NSInteger _bufSz;
    NSInteger _fastReadCounter;
    BOOL _inOpened;
    BOOL _outOpened;
    BOOL _closing;
    BOOL _fastReadCallback;
    BOOL _EOFReached;
    BOOL _inTrimmedMemoryUseState;
}

@property(readonly) NSInteger outgoingBufferSize;
@property(readonly) NSInteger incomingBufferSize;
@property(readonly) NSInteger outgoingMinimumBufferSize;
@property(readonly) NSInteger incomingMinimumBufferSize;
@property(readonly) NSError *inputError;
@property(readonly) NSError *outputError;
@property(readonly) NSData *localSocketAddress;
@property(readonly) NSData *remoteSocketAddress;
@property(readonly) BOOL isReadyForData;
@property(readonly) BOOL outputOpened;
@property(readonly) BOOL inputOpened;
@property(readonly) __CFWriteStream *outputStream;
@property(readonly) __CFReadStream *inputStream;


- (long)writeBytes:(char *)arg1 length:(NSInteger)arg2;
- (struct __CFReadStream { }*)inputStream;
- (void)close;
- (void)dealloc;
- (void)setConnectTimeout:(double)arg1;
- (id)connectToNetService:(id)arg1;
- (id)connectToHost:(id)arg1 port:(unsigned short)arg2 socksSettings:(id)arg3;
- (id)connectToSocketSignature:(struct { NSInteger x1; NSInteger x2; NSInteger x3; struct __CFData {} *x4; }*)arg1 securitySettings:(struct __CFDictionary { }*)arg2;
- (id)connectToHost:(id)arg1 port:(unsigned short)arg2 security:(struct __CFString { }*)arg3;
- (void)negotiateSSLWithSecuritySettings:(id)arg1;
- (id)connectToHost:(id)arg1 port:(unsigned short)arg2 securitySettings:(struct __CFDictionary { }*)arg3;
- (id)connectToHTTPURL:(id)arg1 method:(id)arg2 extraHeaders:(id)arg3;
- (id)connectToSocket:(NSInteger)arg1;
- (void)_stopConnectionTimer;
- (id)_finishConnecting:(BOOL)arg1;
- (void)_connectTimedOut;
- (void)_finishClosing;
- (id)inputError;
- (id)outputError;
- (id)localSocketAddress;
- (id)remoteSocketAddress;
- (id)valueOfResponseHeader:(id)arg1;
- (void)_errorOccurred:(void*)arg1;
- (void)errorOccurred:(id)arg1 onStream:(void*)arg2;
- (void)_openCompleted:(void*)arg1;
- (void)openCompleted:(void*)arg1;
- (void)dataReceived:(id)arg1;
- (void)receivedDataBytes:(id)arg1;
- (void)receivedBytes:(char *)arg1 length:(NSUInteger)arg2;
- (void)EOFReached;
- (void)_dataReceived;
- (NSInteger)outgoingMinimumBufferSize;
- (NSInteger)incomingMinimumBufferSize;
- (NSInteger)outgoingBufferSize;
- (NSInteger)incomingBufferSize;
- (void)setFastReadCallback:(BOOL)arg1;
- (void)setMinimumOutgoingBufferSize:(NSInteger)arg1;
- (void)setMinimumIncomingBufferSize:(NSInteger)arg1;
- (long)_writeFromBuffer;
- (BOOL)isReadyForData;
- (void)pleaseSendMoreData;
- (void)_canAcceptBytes;
- (void)_setEOFReached:(BOOL)arg1;
- (void)trimMemoryUsageButKeepSocketsAlive;
- (BOOL)outputOpened;
- (BOOL)inputOpened;
- (struct __CFWriteStream { }*)outputStream;
- (BOOL)writeData:(id)arg1;
- (void)disconnect;

@end