//
//  TweakSettings.h
//
//  Created by Orangebananaspy on 2018-08-24.
//  Copyright © 2018 Orangebananaspy. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#ifndef TweakSettings_h
#define TweakSettings_h

/*
 Replaces PSTweakSettings as this is thread-safe and more efficient in a way that settings can be shared between the tweak
 itself and the preferences
*/
@interface TweakSettings : NSObject
/*
 Creates a singleton instance of TweakSettings with the name of the plist file representing the settings of a tweak
 and the tweak identifier that will be using it.
 */
+ (TweakSettings *)instanceWithFileName:(NSString *)plistName andTweakID:(NSString *)t_id;

/*
 Get the object for the key with the user name.
 */
- (id)objectForKey:(id)key tweakID:(NSString *)t_id;

/*
 Get the object for the key as a string with the user name.
 */
- (NSString *)stringForKey:(id)key tweakID:(NSString *)t_id;

/*
 Get the object for the key as a bool with the user name.
 */
- (BOOL)boolForKey:(id)key tweakID:(NSString *)t_id;

/*
 Get the object for the key as a int with the user name.
 */
- (int)intForKey:(id)key tweakID:(NSString *)t_id;

/*
 Get the object for the key as a float with the user name.
 */
- (float)floatForKey:(id)key tweakID:(NSString *)t_id;

/*
 Get the object for the key as a color with the user name.
 */
- (UIColor *)colorForKey:(id)key tweakID:(NSString *)t_id;

/*
 Update or Set the object for the given key. If the given file name does not exist it will create it.
 */
- (void)setObject:(id)object forKey:(id)key tweakID:(NSString *)t_id;
@end
#endif /* TweakSettings_h */
