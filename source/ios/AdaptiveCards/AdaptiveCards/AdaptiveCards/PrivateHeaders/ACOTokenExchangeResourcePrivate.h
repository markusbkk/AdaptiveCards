//
//  ACOTokenExchangeResource.h
//  ACOTokenExchangeResourcePrivate
//
//  Copyright © 2021 Microsoft. All rights reserved.
//

#ifdef SWIFT_PACKAGE
#import "ACOTokenExchangeResource.h"
#import "TokenExchangeResource.h"
#else
#import <AdaptiveCards/ACOTokenExchangeResource.h>
#import <AdaptiveCards/TokenExchangeResource.h>
#endif

using namespace AdaptiveCards;

@interface ACOTokenExchangeResource ()

- (instancetype)init:(std::shared_ptr<TokenExchangeResource> const &)tokenExchangeResourceElement;
- (std::shared_ptr<TokenExchangeResource> const &)adaptiveTokenExchangeResource;

@end
