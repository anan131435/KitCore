#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "x25519.h"
#import "ringlogger.h"
#import "key.h"
#import "ioapi.h"
#import "unzip.h"
#import "zip.h"

FOUNDATION_EXPORT double KitCoreVersionNumber;
FOUNDATION_EXPORT const unsigned char KitCoreVersionString[];

