#import "OAIBranchImpllinks.h"

@implementation OAIBranchImpllinks

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
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"self": @"self", @"actions": @"actions", @"runs": @"runs", @"queue": @"queue", @"_class": @"_class" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"self", @"actions", @"runs", @"queue", @"_class"];
  return [optionalProperties containsObject:propertyName];
}

@end
