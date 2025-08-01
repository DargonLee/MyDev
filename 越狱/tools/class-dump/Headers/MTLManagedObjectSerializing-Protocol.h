//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSDictionary, NSManagedObject, NSSet, NSString, NSValueTransformer;

@protocol MTLManagedObjectSerializing
+ (NSDictionary *)managedObjectKeysByPropertyKey;
+ (NSString *)managedObjectEntityName;

@optional
+ (Class)classForDeserializingManagedObject:(NSManagedObject *)arg1;
+ (NSDictionary *)relationshipModelClassesByPropertyKey;
+ (NSValueTransformer *)entityAttributeTransformerForKey:(NSString *)arg1;
+ (NSSet *)propertyKeysForManagedObjectUniquing;
@end

