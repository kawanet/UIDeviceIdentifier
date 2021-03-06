//
//  UIDeviceHardware.h
//
//  Created by Paul Williamson on 9/12/2012
//  https://github.com/squarefrog/UIDeviceIdentifier
//

#import <Foundation/Foundation.h>

#ifdef NS_ASSUME_NONNULL_BEGIN
NS_ASSUME_NONNULL_BEGIN
#endif

/** UIDeviceHardware as a simple class to allow fetching model descriptions from an iOS device
 */
@interface UIDeviceHardware : NSObject 

/**
 * The model name of the device. For example, `iPhone5,3`, `iPad3,1`, `iPod5,1`
 * @return The current devices model name as a string
 */
+ (NSString *) platform;

/**
 * The human readable platform string. For example, `iPhone 5C (GSM)`, `iPad 3 (WiFi)`, `iPod Touch 5G`.
 * @return The current devices platform string in a human readable format
 */
+ (NSString *) platformString;

/**
 * The human readable platform string Simple. For example, `iPhone 5C`, `iPad 3`, `iPod Touch 5G`.
 * @return The current devices platform string in a human readable format
 */
+ (NSString *) platformStringSimple;

@end

#ifdef NS_ASSUME_NONNULL_END
NS_ASSUME_NONNULL_END
#endif
