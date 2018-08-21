#import "OAIPipelineImpl.h"

@implementation OAIPipelineImpl

- (instancetype)init {
  self = [super init];
  if (self) {
    // initialize property's default value, if any
    
  }
  return self;
}


/**
 * Maps json key to property name.
 * This method is used by `JSONModel`.
 */
+ (JSONKeyMapper *)keyMapper {
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"_class": @"_class", @"displayName": @"displayName", @"estimatedDurationInMillis": @"estimatedDurationInMillis", @"fullName": @"fullName", @"latestRun": @"latestRun", @"name": @"name", @"organization": @"organization", @"weatherScore": @"weatherScore", @"links": @"_links" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"_class", @"displayName", @"estimatedDurationInMillis", @"fullName", @"latestRun", @"name", @"organization", @"weatherScore", @"links"];
  return [optionalProperties containsObject:propertyName];
}

@end
