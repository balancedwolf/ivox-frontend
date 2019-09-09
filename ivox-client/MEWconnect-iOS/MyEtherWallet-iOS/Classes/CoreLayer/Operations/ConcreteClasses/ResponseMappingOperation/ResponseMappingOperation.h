//
//  ResponseMappingOperation.h
//  MyEtherWallet-iOS
//
//  Created by Mikhail Nikanorov on 21/05/2018.
//  Copyright © 2018 MyEtherWallet, Inc. All rights reserved.
//

#import "AsyncOperation.h"
#import "ChainableOperation.h"

@protocol ResponseMapper;

@interface ResponseMappingOperation : AsyncOperation <ChainableOperation>
+ (instancetype)operationWithResponseMapper:(id<ResponseMapper>)responseMapper
                             mappingContext:(NSDictionary *)context;
@end
