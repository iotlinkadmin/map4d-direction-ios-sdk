#if TARGET_OS_SIMULATOR
// Generated by Apple Swift version 5.1.2 (swiftlang-1100.0.278 clang-1100.0.33.9)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreLocation;
@import Foundation;
@import ObjectiveC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="Map4dServices",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

@class MFDirectionOptions;
@class MFRouteOptions;
@class MFRoute;
@protocol MFServiceError;
@protocol MFServiceTask;

SWIFT_CLASS("_TtC13Map4dServices11MFDirection")
@interface MFDirection : NSObject
@property (nonatomic, strong) MFDirectionOptions * _Nullable options;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) MFDirection * _Nonnull shared;)
+ (MFDirection * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
- (id <MFServiceTask> _Nullable)calculateWithOptions:(MFRouteOptions * _Nonnull)options completion:(void (^ _Nonnull)(NSArray<MFRoute *> * _Nullable, id <MFServiceError> _Nullable))completion;
- (nonnull instancetype)initWithOptions:(MFDirectionOptions * _Nullable)options OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC13Map4dServices18MFDirectionOptions")
@interface MFDirectionOptions : NSObject
@property (nonatomic, copy) NSString * _Nullable accessKey;
@property (nonatomic, copy) NSString * _Nullable language;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

typedef SWIFT_ENUM(NSInteger, MFManeuver, closed) {
  MFManeuverNone = 0,
  MFManeuverKeepLeft = 1,
  MFManeuverKeepRight = 2,
  MFManeuverTurnSharpRight = 3,
  MFManeuverTurnSharpLeft = 4,
  MFManeuverTurnLeft = 5,
  MFManeuverTurnRight = 6,
  MFManeuverTurnSlightLeft = 7,
  MFManeuverTurnSlightRight = 8,
  MFManeuverContinueOnStreet = 9,
  MFManeuverFinish = 10,
  MFManeuverRoundaboutLeft = 11,
  MFManeuverRoundaboutRight = 12,
};

@class MFRouteLeg;
@class MFRouteInfo;

SWIFT_CLASS("_TtC13Map4dServices7MFRoute")
@interface MFRoute : NSObject
@property (nonatomic, copy) NSString * _Nonnull summary;
@property (nonatomic, copy) NSArray<NSValue *> * _Nonnull overviewCoordinates;
@property (nonatomic, copy) NSArray<MFRouteLeg *> * _Nonnull legs;
@property (nonatomic, strong) MFRouteInfo * _Nonnull distance;
@property (nonatomic, strong) MFRouteInfo * _Nonnull duration;
@property (nonatomic, copy) NSArray<NSValue *> * _Nonnull snappedCoordinates;
@property (nonatomic, strong) MFRouteOptions * _Nullable options;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


@interface MFRoute (SWIFT_EXTENSION(Map4dServices))
@end


SWIFT_CLASS_NAMED("Info")
@interface MFRouteInfo : NSObject
@property (nonatomic, copy) NSString * _Nonnull text;
@property (nonatomic) double value;
@end


@interface MFRoute (SWIFT_EXTENSION(Map4dServices))
@end

@class MFRouteStep;

SWIFT_CLASS_NAMED("Leg")
@interface MFRouteLeg : NSObject
@property (nonatomic, strong) MFRouteInfo * _Nonnull distance;
@property (nonatomic, strong) MFRouteInfo * _Nonnull duration;
@property (nonatomic, copy) NSString * _Nonnull startAddress;
@property (nonatomic, copy) NSString * _Nonnull endAddress;
@property (nonatomic) CLLocationCoordinate2D startCoordinate;
@property (nonatomic) CLLocationCoordinate2D endCoordinate;
@property (nonatomic, copy) NSArray<MFRouteStep *> * _Nonnull steps;
@end


@interface MFRoute (SWIFT_EXTENSION(Map4dServices))
@end

typedef SWIFT_ENUM_NAMED(NSInteger, MFRouteWeighting, "Weighting", closed) {
  MFRouteWeightingShortest = 0,
  MFRouteWeightingFastest = 1,
  MFRouteWeightingBalance = 2,
};


@interface MFRoute (SWIFT_EXTENSION(Map4dServices))
@end

enum MFTravelMode : NSInteger;

SWIFT_CLASS_NAMED("Step")
@interface MFRouteStep : NSObject
@property (nonatomic, copy) NSString * _Nonnull instruction;
@property (nonatomic) enum MFManeuver maneuver;
@property (nonatomic, strong) MFRouteInfo * _Nonnull distance;
@property (nonatomic, strong) MFRouteInfo * _Nonnull duration;
@property (nonatomic) CLLocationCoordinate2D startCoordinate;
@property (nonatomic) CLLocationCoordinate2D endCoordinate;
@property (nonatomic, copy) NSArray<NSValue *> * _Nonnull coordinates;
@property (nonatomic, copy) NSString * _Nonnull streetName;
@property (nonatomic) enum MFTravelMode mode;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class MFWaypoint;

SWIFT_CLASS("_TtC13Map4dServices14MFRouteOptions")
@interface MFRouteOptions : NSObject
@property (nonatomic, copy) NSArray<MFWaypoint *> * _Nonnull waypoints;
@property (nonatomic) enum MFTravelMode mode;
@property (nonatomic) enum MFRouteWeighting weighting;
@property (nonatomic, copy) NSString * _Nonnull language;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (MFRouteOptions * _Nonnull)clone SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_PROTOCOL("_TtP13Map4dServices14MFServiceError_")
@protocol MFServiceError
@property (nonatomic, readonly, copy) NSString * _Nonnull errorCode;
@property (nonatomic, readonly, copy) NSString * _Nonnull errorMessage;
@end


SWIFT_PROTOCOL("_TtP13Map4dServices13MFServiceTask_")
@protocol MFServiceTask
- (void)abort;
@end

typedef SWIFT_ENUM(NSInteger, MFTravelMode, closed) {
  MFTravelModeCar = 0,
  MFTravelModeBike = 1,
  MFTravelModeFoot = 2,
};


SWIFT_CLASS("_TtC13Map4dServices10MFWaypoint")
@interface MFWaypoint : NSObject
@property (nonatomic) CLLocationCoordinate2D coordinate;
@property (nonatomic, copy) NSString * _Nullable name;
- (nonnull instancetype)initWithCoordinate:(CLLocationCoordinate2D)coordinate name:(NSString * _Nullable)name OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
- (MFWaypoint * _Nonnull)clone SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


@interface NSError (SWIFT_EXTENSION(Map4dServices)) <MFServiceError>
@property (nonatomic, readonly, copy) NSString * _Nonnull errorCode;
@property (nonatomic, readonly, copy) NSString * _Nonnull errorMessage;
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#else
#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.1.2 (swiftlang-1100.0.278 clang-1100.0.33.9)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreLocation;
@import Foundation;
@import ObjectiveC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="Map4dServices",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

@class MFDirectionOptions;
@class MFRouteOptions;
@class MFRoute;
@protocol MFServiceError;
@protocol MFServiceTask;

SWIFT_CLASS("_TtC13Map4dServices11MFDirection")
@interface MFDirection : NSObject
@property (nonatomic, strong) MFDirectionOptions * _Nullable options;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) MFDirection * _Nonnull shared;)
+ (MFDirection * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
- (id <MFServiceTask> _Nullable)calculateWithOptions:(MFRouteOptions * _Nonnull)options completion:(void (^ _Nonnull)(NSArray<MFRoute *> * _Nullable, id <MFServiceError> _Nullable))completion;
- (nonnull instancetype)initWithOptions:(MFDirectionOptions * _Nullable)options OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC13Map4dServices18MFDirectionOptions")
@interface MFDirectionOptions : NSObject
@property (nonatomic, copy) NSString * _Nullable accessKey;
@property (nonatomic, copy) NSString * _Nullable language;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

typedef SWIFT_ENUM(NSInteger, MFManeuver, closed) {
  MFManeuverNone = 0,
  MFManeuverKeepLeft = 1,
  MFManeuverKeepRight = 2,
  MFManeuverTurnSharpRight = 3,
  MFManeuverTurnSharpLeft = 4,
  MFManeuverTurnLeft = 5,
  MFManeuverTurnRight = 6,
  MFManeuverTurnSlightLeft = 7,
  MFManeuverTurnSlightRight = 8,
  MFManeuverContinueOnStreet = 9,
  MFManeuverFinish = 10,
  MFManeuverRoundaboutLeft = 11,
  MFManeuverRoundaboutRight = 12,
};

@class MFRouteLeg;
@class MFRouteInfo;

SWIFT_CLASS("_TtC13Map4dServices7MFRoute")
@interface MFRoute : NSObject
@property (nonatomic, copy) NSString * _Nonnull summary;
@property (nonatomic, copy) NSArray<NSValue *> * _Nonnull overviewCoordinates;
@property (nonatomic, copy) NSArray<MFRouteLeg *> * _Nonnull legs;
@property (nonatomic, strong) MFRouteInfo * _Nonnull distance;
@property (nonatomic, strong) MFRouteInfo * _Nonnull duration;
@property (nonatomic, copy) NSArray<NSValue *> * _Nonnull snappedCoordinates;
@property (nonatomic, strong) MFRouteOptions * _Nullable options;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


@interface MFRoute (SWIFT_EXTENSION(Map4dServices))
@end


SWIFT_CLASS_NAMED("Info")
@interface MFRouteInfo : NSObject
@property (nonatomic, copy) NSString * _Nonnull text;
@property (nonatomic) double value;
@end


@interface MFRoute (SWIFT_EXTENSION(Map4dServices))
@end

@class MFRouteStep;

SWIFT_CLASS_NAMED("Leg")
@interface MFRouteLeg : NSObject
@property (nonatomic, strong) MFRouteInfo * _Nonnull distance;
@property (nonatomic, strong) MFRouteInfo * _Nonnull duration;
@property (nonatomic, copy) NSString * _Nonnull startAddress;
@property (nonatomic, copy) NSString * _Nonnull endAddress;
@property (nonatomic) CLLocationCoordinate2D startCoordinate;
@property (nonatomic) CLLocationCoordinate2D endCoordinate;
@property (nonatomic, copy) NSArray<MFRouteStep *> * _Nonnull steps;
@end


@interface MFRoute (SWIFT_EXTENSION(Map4dServices))
@end

typedef SWIFT_ENUM_NAMED(NSInteger, MFRouteWeighting, "Weighting", closed) {
  MFRouteWeightingShortest = 0,
  MFRouteWeightingFastest = 1,
  MFRouteWeightingBalance = 2,
};


@interface MFRoute (SWIFT_EXTENSION(Map4dServices))
@end

enum MFTravelMode : NSInteger;

SWIFT_CLASS_NAMED("Step")
@interface MFRouteStep : NSObject
@property (nonatomic, copy) NSString * _Nonnull instruction;
@property (nonatomic) enum MFManeuver maneuver;
@property (nonatomic, strong) MFRouteInfo * _Nonnull distance;
@property (nonatomic, strong) MFRouteInfo * _Nonnull duration;
@property (nonatomic) CLLocationCoordinate2D startCoordinate;
@property (nonatomic) CLLocationCoordinate2D endCoordinate;
@property (nonatomic, copy) NSArray<NSValue *> * _Nonnull coordinates;
@property (nonatomic, copy) NSString * _Nonnull streetName;
@property (nonatomic) enum MFTravelMode mode;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class MFWaypoint;

SWIFT_CLASS("_TtC13Map4dServices14MFRouteOptions")
@interface MFRouteOptions : NSObject
@property (nonatomic, copy) NSArray<MFWaypoint *> * _Nonnull waypoints;
@property (nonatomic) enum MFTravelMode mode;
@property (nonatomic) enum MFRouteWeighting weighting;
@property (nonatomic, copy) NSString * _Nonnull language;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (MFRouteOptions * _Nonnull)clone SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_PROTOCOL("_TtP13Map4dServices14MFServiceError_")
@protocol MFServiceError
@property (nonatomic, readonly, copy) NSString * _Nonnull errorCode;
@property (nonatomic, readonly, copy) NSString * _Nonnull errorMessage;
@end


SWIFT_PROTOCOL("_TtP13Map4dServices13MFServiceTask_")
@protocol MFServiceTask
- (void)abort;
@end

typedef SWIFT_ENUM(NSInteger, MFTravelMode, closed) {
  MFTravelModeCar = 0,
  MFTravelModeBike = 1,
  MFTravelModeFoot = 2,
};


SWIFT_CLASS("_TtC13Map4dServices10MFWaypoint")
@interface MFWaypoint : NSObject
@property (nonatomic) CLLocationCoordinate2D coordinate;
@property (nonatomic, copy) NSString * _Nullable name;
- (nonnull instancetype)initWithCoordinate:(CLLocationCoordinate2D)coordinate name:(NSString * _Nullable)name OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
- (MFWaypoint * _Nonnull)clone SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


@interface NSError (SWIFT_EXTENSION(Map4dServices)) <MFServiceError>
@property (nonatomic, readonly, copy) NSString * _Nonnull errorCode;
@property (nonatomic, readonly, copy) NSString * _Nonnull errorMessage;
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop

#elif defined(__ARM_ARCH_7A__) && __ARM_ARCH_7A__
// Generated by Apple Swift version 5.1.2 (swiftlang-1100.0.278 clang-1100.0.33.9)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreLocation;
@import Foundation;
@import ObjectiveC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="Map4dServices",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

@class MFDirectionOptions;
@class MFRouteOptions;
@class MFRoute;
@protocol MFServiceError;
@protocol MFServiceTask;

SWIFT_CLASS("_TtC13Map4dServices11MFDirection")
@interface MFDirection : NSObject
@property (nonatomic, strong) MFDirectionOptions * _Nullable options;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) MFDirection * _Nonnull shared;)
+ (MFDirection * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
- (id <MFServiceTask> _Nullable)calculateWithOptions:(MFRouteOptions * _Nonnull)options completion:(void (^ _Nonnull)(NSArray<MFRoute *> * _Nullable, id <MFServiceError> _Nullable))completion;
- (nonnull instancetype)initWithOptions:(MFDirectionOptions * _Nullable)options OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC13Map4dServices18MFDirectionOptions")
@interface MFDirectionOptions : NSObject
@property (nonatomic, copy) NSString * _Nullable accessKey;
@property (nonatomic, copy) NSString * _Nullable language;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

typedef SWIFT_ENUM(NSInteger, MFManeuver, closed) {
  MFManeuverNone = 0,
  MFManeuverKeepLeft = 1,
  MFManeuverKeepRight = 2,
  MFManeuverTurnSharpRight = 3,
  MFManeuverTurnSharpLeft = 4,
  MFManeuverTurnLeft = 5,
  MFManeuverTurnRight = 6,
  MFManeuverTurnSlightLeft = 7,
  MFManeuverTurnSlightRight = 8,
  MFManeuverContinueOnStreet = 9,
  MFManeuverFinish = 10,
  MFManeuverRoundaboutLeft = 11,
  MFManeuverRoundaboutRight = 12,
};

@class MFRouteLeg;
@class MFRouteInfo;

SWIFT_CLASS("_TtC13Map4dServices7MFRoute")
@interface MFRoute : NSObject
@property (nonatomic, copy) NSString * _Nonnull summary;
@property (nonatomic, copy) NSArray<NSValue *> * _Nonnull overviewCoordinates;
@property (nonatomic, copy) NSArray<MFRouteLeg *> * _Nonnull legs;
@property (nonatomic, strong) MFRouteInfo * _Nonnull distance;
@property (nonatomic, strong) MFRouteInfo * _Nonnull duration;
@property (nonatomic, copy) NSArray<NSValue *> * _Nonnull snappedCoordinates;
@property (nonatomic, strong) MFRouteOptions * _Nullable options;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


@interface MFRoute (SWIFT_EXTENSION(Map4dServices))
@end


SWIFT_CLASS_NAMED("Info")
@interface MFRouteInfo : NSObject
@property (nonatomic, copy) NSString * _Nonnull text;
@property (nonatomic) double value;
@end


@interface MFRoute (SWIFT_EXTENSION(Map4dServices))
@end

@class MFRouteStep;

SWIFT_CLASS_NAMED("Leg")
@interface MFRouteLeg : NSObject
@property (nonatomic, strong) MFRouteInfo * _Nonnull distance;
@property (nonatomic, strong) MFRouteInfo * _Nonnull duration;
@property (nonatomic, copy) NSString * _Nonnull startAddress;
@property (nonatomic, copy) NSString * _Nonnull endAddress;
@property (nonatomic) CLLocationCoordinate2D startCoordinate;
@property (nonatomic) CLLocationCoordinate2D endCoordinate;
@property (nonatomic, copy) NSArray<MFRouteStep *> * _Nonnull steps;
@end


@interface MFRoute (SWIFT_EXTENSION(Map4dServices))
@end

typedef SWIFT_ENUM_NAMED(NSInteger, MFRouteWeighting, "Weighting", closed) {
  MFRouteWeightingShortest = 0,
  MFRouteWeightingFastest = 1,
  MFRouteWeightingBalance = 2,
};


@interface MFRoute (SWIFT_EXTENSION(Map4dServices))
@end

enum MFTravelMode : NSInteger;

SWIFT_CLASS_NAMED("Step")
@interface MFRouteStep : NSObject
@property (nonatomic, copy) NSString * _Nonnull instruction;
@property (nonatomic) enum MFManeuver maneuver;
@property (nonatomic, strong) MFRouteInfo * _Nonnull distance;
@property (nonatomic, strong) MFRouteInfo * _Nonnull duration;
@property (nonatomic) CLLocationCoordinate2D startCoordinate;
@property (nonatomic) CLLocationCoordinate2D endCoordinate;
@property (nonatomic, copy) NSArray<NSValue *> * _Nonnull coordinates;
@property (nonatomic, copy) NSString * _Nonnull streetName;
@property (nonatomic) enum MFTravelMode mode;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class MFWaypoint;

SWIFT_CLASS("_TtC13Map4dServices14MFRouteOptions")
@interface MFRouteOptions : NSObject
@property (nonatomic, copy) NSArray<MFWaypoint *> * _Nonnull waypoints;
@property (nonatomic) enum MFTravelMode mode;
@property (nonatomic) enum MFRouteWeighting weighting;
@property (nonatomic, copy) NSString * _Nonnull language;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (MFRouteOptions * _Nonnull)clone SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_PROTOCOL("_TtP13Map4dServices14MFServiceError_")
@protocol MFServiceError
@property (nonatomic, readonly, copy) NSString * _Nonnull errorCode;
@property (nonatomic, readonly, copy) NSString * _Nonnull errorMessage;
@end


SWIFT_PROTOCOL("_TtP13Map4dServices13MFServiceTask_")
@protocol MFServiceTask
- (void)abort;
@end

typedef SWIFT_ENUM(NSInteger, MFTravelMode, closed) {
  MFTravelModeCar = 0,
  MFTravelModeBike = 1,
  MFTravelModeFoot = 2,
};


SWIFT_CLASS("_TtC13Map4dServices10MFWaypoint")
@interface MFWaypoint : NSObject
@property (nonatomic) CLLocationCoordinate2D coordinate;
@property (nonatomic, copy) NSString * _Nullable name;
- (nonnull instancetype)initWithCoordinate:(CLLocationCoordinate2D)coordinate name:(NSString * _Nullable)name OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
- (MFWaypoint * _Nonnull)clone SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


@interface NSError (SWIFT_EXTENSION(Map4dServices)) <MFServiceError>
@property (nonatomic, readonly, copy) NSString * _Nonnull errorCode;
@property (nonatomic, readonly, copy) NSString * _Nonnull errorMessage;
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop

#endif
#endif
