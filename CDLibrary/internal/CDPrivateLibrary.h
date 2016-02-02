//
//  CDPrivateLibrary.h
//  CDLibrary
//
//  Created by Mehdi Mlala on 02/02/2016.
//  Copyright © 2016 CyberDandy. All rights reserved.
//

#ifndef CDPrivateLibrary_h
#define CDPrivateLibrary_h

#pragma mark -
#pragma mark Macros

#define CDLibLocalizedString(key) NSLocalizedStringFromTableInBundle(key, @"CDLibraryLocalizable", [NSBundle CDLibraryResourcesBundle], nil)

#import <CDLibrary/NSBundle+Resources.h>
#import <CDLibrary/CDLibLocalizedStringHelperPrivateHeader.h>

#endif /* CDPrivateLibrary_h */
