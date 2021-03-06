///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBPAPERCursor;
@class DBPAPERListPaperDocsResponse;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `ListPaperDocsResponse` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBPAPERListPaperDocsResponse : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The list of Paper doc IDs that can be used to access the given Paper docs or
/// supplied to other API methods. The list is sorted in the order specified by
/// the initial call to `docsList`.
@property (nonatomic, readonly) NSArray<NSString *> *docIds;

/// Pass the cursor into `docsListContinue` to paginate through all files. The
/// cursor preserves all properties as specified in the original call to
/// `docsList`.
@property (nonatomic, readonly) DBPAPERCursor *cursor;

/// Will be set to True if a subsequent call with the provided cursor to
/// `docsListContinue` returns immediately with some results. If set to False
/// please allow some delay before making another call to `docsListContinue`.
@property (nonatomic, readonly) NSNumber *hasMore;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param docIds The list of Paper doc IDs that can be used to access the given
/// Paper docs or supplied to other API methods. The list is sorted in the order
/// specified by the initial call to `docsList`.
/// @param cursor Pass the cursor into `docsListContinue` to paginate through
/// all files. The cursor preserves all properties as specified in the original
/// call to `docsList`.
/// @param hasMore Will be set to True if a subsequent call with the provided
/// cursor to `docsListContinue` returns immediately with some results. If set
/// to False please allow some delay before making another call to
/// `docsListContinue`.
///
/// @return An initialized instance.
///
- (instancetype)initWithDocIds:(NSArray<NSString *> *)docIds cursor:(DBPAPERCursor *)cursor hasMore:(NSNumber *)hasMore;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `ListPaperDocsResponse` struct.
///
@interface DBPAPERListPaperDocsResponseSerializer : NSObject

///
/// Serializes `DBPAPERListPaperDocsResponse` instances.
///
/// @param instance An instance of the `DBPAPERListPaperDocsResponse` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBPAPERListPaperDocsResponse` API object.
///
+ (NSDictionary *)serialize:(DBPAPERListPaperDocsResponse *)instance;

///
/// Deserializes `DBPAPERListPaperDocsResponse` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBPAPERListPaperDocsResponse` API object.
///
/// @return An instantiation of the `DBPAPERListPaperDocsResponse` object.
///
+ (DBPAPERListPaperDocsResponse *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
