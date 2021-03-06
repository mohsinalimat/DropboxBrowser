///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGTfaRemoveBackupPhoneDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `TfaRemoveBackupPhoneDetails` struct.
///
/// Removed the backup phone for two-step verification.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGTfaRemoveBackupPhoneDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @return An initialized instance.
///
- (instancetype)initDefault;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `TfaRemoveBackupPhoneDetails` struct.
///
@interface DBTEAMLOGTfaRemoveBackupPhoneDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGTfaRemoveBackupPhoneDetails` instances.
///
/// @param instance An instance of the `DBTEAMLOGTfaRemoveBackupPhoneDetails`
/// API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGTfaRemoveBackupPhoneDetails` API object.
///
+ (NSDictionary *)serialize:(DBTEAMLOGTfaRemoveBackupPhoneDetails *)instance;

///
/// Deserializes `DBTEAMLOGTfaRemoveBackupPhoneDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGTfaRemoveBackupPhoneDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGTfaRemoveBackupPhoneDetails`
/// object.
///
+ (DBTEAMLOGTfaRemoveBackupPhoneDetails *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
