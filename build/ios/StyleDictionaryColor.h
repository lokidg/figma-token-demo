
//
// StyleDictionaryColor.h
//

// Do not edit directly
<<<<<<< HEAD
// Generated on Tue, 23 Nov 2021 00:04:58 GMT
=======
// Generated on Sun, 21 Nov 2021 19:24:05 GMT
>>>>>>> 16e8d7e68d83ad1fe6f787c637f36ce193cae649


#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, StyleDictionaryColorName) {
ColorBaseGrayLight,
ColorBaseGrayMedium,
ColorBaseGrayDark,
ColorBaseRed,
ColorBaseGreen,
ColorFontBase,
ColorFontSecondary,
ColorFontTertiary
};

@interface StyleDictionaryColor : NSObject
+ (NSArray *)values;
+ (UIColor *)color:(StyleDictionaryColorName)color;
@end
