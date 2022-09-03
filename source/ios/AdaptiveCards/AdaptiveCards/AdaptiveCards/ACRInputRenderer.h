//
//  ACRInputRenderer
//  ACRInputRenderer.h
//
//  Copyright © 2017 Microsoft. All rights reserved.
//

#ifdef SWIFT_PACKAGE
#import "ACRBaseCardElementRenderer.h"
#else
#import <AdaptiveCards/ACRBaseCardElementRenderer.h>
#endif

@interface ACRInputRenderer : ACRBaseCardElementRenderer

+ (ACRInputRenderer *)getInstance;

@end
