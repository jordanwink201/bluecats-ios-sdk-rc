//
//  BCPaginator.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 11/3/14.
//  Copyright (c) 2014 BlueCats. All rights reserved.
//

@interface BCPaginator : NSObject

@property (nonatomic, copy) NSString *path;
@property (nonatomic) NSDictionary *parameters;
@property (nonatomic, assign, readonly) NSUInteger perPage;
@property (nonatomic, assign, readonly) BOOL hasLoadedPage;
@property (nonatomic, readonly) NSUInteger currentPage;
@property (nonatomic, readonly) NSUInteger offset;
@property (nonatomic, readonly) NSUInteger pageCount;
@property (nonatomic, readonly) NSUInteger objectCount;

- (void)setCompletionBlockWithSuccess:(void (^)(BCPaginator *paginator, NSArray *jsonArray, NSUInteger page))success
                              failure:(void (^)(BCPaginator *paginator, NSError *error))failure;

- (BOOL)hasPageCount;
- (BOOL)hasObjectCount;
- (BOOL)hasNextPage;
- (BOOL)hasPreviousPage;
- (void)loadNextPage;
- (void)loadPreviousPage;
- (void)loadPage:(NSUInteger)pageNumber;

- (void)cancel;

- (id)initWithPath:(NSString *)path;
- (id)initWithPath:(NSString *)path andParameters:(NSDictionary *)parameters;
- (id)initWithPath:(NSString *)path parameters:(NSDictionary *)parameters andPreferredPerPage:(NSUInteger)preferredPerPage;

+ (BCPaginator *)loadAllPagesForPath:(NSString *)path
                          parameters:(NSDictionary *)parameters
                             success:(void (^)(NSArray *jsonArray))success
                             failure:(void (^)(NSError *error))failure;

@end
