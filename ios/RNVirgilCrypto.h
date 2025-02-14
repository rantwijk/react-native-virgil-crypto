
#if __has_include("RCTBridgeModule.h")
#import "RCTBridgeModule.h"
#else
#import <React/RCTBridgeModule.h>
#endif

#if __has_include(<VirgilCryptoFoundation/VirgilCryptoFoundation-Swift.h>)
#import <VirgilCryptoFoundation/VirgilCryptoFoundation-Swift.h>
#else
#import "VirgilCryptoFoundation-Swift.h"
#endif

#if __has_include(<VirgilCrypto/VirgilCrypto-Swift.h>)
#import <VirgilCrypto/VirgilCrypto-Swift.h>
#else
#import "VirgilCrypto-Swift.h"
#endif

#import "RCTConvert+KeyPairType.h"
#import "RCTConvert+HashAlgorithm.h"
#import "NSData+Encodings.h"
#import "NSString+Encodings.h"
#import "ResponseFactory.h"
#import "FSUtils.h"

@interface RNVirgilCrypto : NSObject <RCTBridgeModule>

@property (nonatomic, retain) VSMVirgilCrypto *crypto;

@end
  
