#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class NSObject, SharedWordLocal, SharedWord, SharedUserLevel, SharedWordMapper, SharedKotlinx_coroutines_coreCoroutineDispatcher, SharedCommonFlow<T>, SharedCommonStateFlow<T>, SharedCommonMutableStateFlow<T>, SharedLetter, SharedBoardEvents, SharedBoardEventsGameStarted, SharedBoardEventsLetterSwiped, SharedBoardEventsOnCanel, SharedBoardEventsOnPause, SharedBoardEventsOnResume, SharedBoardEventsUserSwiped, SharedFalehFeel, SharedBoardState, SharedSoundState, SharedKotlinEnumCompanion, SharedKotlinEnum<E>, SharedKotlinArray<T>, SharedOrientation, SharedSoundType, SharedHomeEvents, SharedHomeEventsGetLevel, SharedHomeState, SharedKotlinThrowable, SharedKotlinException, SharedKotlinRuntimeException, SharedKotlinIllegalStateException, SharedKotlinAbstractCoroutineContextElement, SharedKotlinx_coroutines_coreCoroutineDispatcherKey, SharedKotlinAbstractCoroutineContextKey<B, E>;

@protocol SharedMainRepository, SharedKotlinx_coroutines_coreFlowCollector, SharedKotlinx_coroutines_coreFlow, SharedDisposableHandle, SharedKotlinx_coroutines_coreCoroutineScope, SharedKotlinx_coroutines_coreSharedFlow, SharedKotlinx_coroutines_coreStateFlow, SharedKotlinx_coroutines_coreMutableSharedFlow, SharedKotlinx_coroutines_coreMutableStateFlow, SharedKotlinx_coroutines_coreDisposableHandle, SharedKotlinComparable, SharedKotlinCoroutineContext, SharedKotlinCoroutineContextKey, SharedKotlinCoroutineContextElement, SharedKotlinContinuation, SharedKotlinContinuationInterceptor, SharedKotlinx_coroutines_coreRunnable, SharedKotlinIterator;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface SharedBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface SharedBase (SharedBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface SharedMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface SharedMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorSharedKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface SharedNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface SharedByte : SharedNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface SharedUByte : SharedNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface SharedShort : SharedNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface SharedUShort : SharedNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface SharedInt : SharedNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface SharedUInt : SharedNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface SharedLong : SharedNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface SharedULong : SharedNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface SharedFloat : SharedNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface SharedDouble : SharedNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface SharedBoolean : SharedNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LocalDataStore")))
@interface SharedLocalDataStore : SharedBase
- (instancetype)initWithContext:(NSObject *)context __attribute__((swift_name("init(context:)"))) __attribute__((objc_designated_initializer));
- (void)addLevelLevel:(int32_t)level __attribute__((swift_name("addLevel(level:)")));
- (void)addXpXp:(int32_t)xp __attribute__((swift_name("addXp(xp:)")));
- (NSArray<SharedWordLocal *> *)generateNewWordsNum:(int32_t)num __attribute__((swift_name("generateNewWords(num:)")));
- (int32_t)getLevel __attribute__((swift_name("getLevel()")));
- (int32_t)getXP __attribute__((swift_name("getXP()")));
- (BOOL)isContainedWord:(NSString *)word __attribute__((swift_name("isContained(word:)")));
@end

__attribute__((swift_name("MainRepository")))
@protocol SharedMainRepository
@required
- (void)addXPStars:(int32_t)stars __attribute__((swift_name("addXP(stars:)")));
- (NSArray<SharedWord *> *)generateNewWordsNum:(int32_t)num __attribute__((swift_name("generateNewWords(num:)")));
- (SharedUserLevel *)getUserLevel __attribute__((swift_name("getUserLevel()")));
- (BOOL)isContainedWord:(NSString *)word __attribute__((swift_name("isContained(word:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MainRepositoryImp")))
@interface SharedMainRepositoryImp : SharedBase <SharedMainRepository>
- (instancetype)initWithContext:(NSObject *)context __attribute__((swift_name("init(context:)"))) __attribute__((objc_designated_initializer));
- (void)addXPStars:(int32_t)stars __attribute__((swift_name("addXP(stars:)")));
- (NSArray<SharedWord *> *)generateNewWordsNum:(int32_t)num __attribute__((swift_name("generateNewWords(num:)")));
- (SharedUserLevel *)getUserLevel __attribute__((swift_name("getUserLevel()")));
- (BOOL)isContainedWord:(NSString *)word __attribute__((swift_name("isContained(word:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WordLocal")))
@interface SharedWordLocal : SharedBase
- (instancetype)initWithId:(NSString *)id word:(NSString *)word __attribute__((swift_name("init(id:word:)"))) __attribute__((objc_designated_initializer));
- (SharedWordLocal *)doCopyId:(NSString *)id word:(NSString *)word __attribute__((swift_name("doCopy(id:word:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *word __attribute__((swift_name("word")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WordMapper")))
@interface SharedWordMapper : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)wordMapper __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedWordMapper *shared __attribute__((swift_name("shared")));
- (SharedWord *)mapLocal:(SharedWordLocal *)local __attribute__((swift_name("map(local:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlow")))
@protocol SharedKotlinx_coroutines_coreFlow
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<SharedKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((swift_name("CommonFlow")))
@interface SharedCommonFlow<T> : SharedBase <SharedKotlinx_coroutines_coreFlow>
- (instancetype)initWithFlow:(id<SharedKotlinx_coroutines_coreFlow>)flow __attribute__((swift_name("init(flow:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<SharedKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
- (id<SharedDisposableHandle>)subscribeOnCollect:(void (^)(T _Nullable))onCollect __attribute__((swift_name("subscribe(onCollect:)")));
- (id<SharedDisposableHandle>)subscribeCoroutineScope:(id<SharedKotlinx_coroutines_coreCoroutineScope>)coroutineScope dispatcher:(SharedKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher onCollect:(void (^)(T _Nullable))onCollect __attribute__((swift_name("subscribe(coroutineScope:dispatcher:onCollect:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSharedFlow")))
@protocol SharedKotlinx_coroutines_coreSharedFlow <SharedKotlinx_coroutines_coreFlow>
@required
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreStateFlow")))
@protocol SharedKotlinx_coroutines_coreStateFlow <SharedKotlinx_coroutines_coreSharedFlow>
@required
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("CommonStateFlow")))
@interface SharedCommonStateFlow<T> : SharedCommonFlow<T> <SharedKotlinx_coroutines_coreStateFlow>
- (instancetype)initWithFlow:(id<SharedKotlinx_coroutines_coreStateFlow>)flow __attribute__((swift_name("init(flow:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<SharedKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@property (readonly) T _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlowCollector")))
@protocol SharedKotlinx_coroutines_coreFlowCollector
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreMutableSharedFlow")))
@protocol SharedKotlinx_coroutines_coreMutableSharedFlow <SharedKotlinx_coroutines_coreSharedFlow, SharedKotlinx_coroutines_coreFlowCollector>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (void)resetReplayCache __attribute__((swift_name("resetReplayCache()")));
- (BOOL)tryEmitValue:(id _Nullable)value __attribute__((swift_name("tryEmit(value:)")));
@property (readonly) id<SharedKotlinx_coroutines_coreStateFlow> subscriptionCount __attribute__((swift_name("subscriptionCount")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreMutableStateFlow")))
@protocol SharedKotlinx_coroutines_coreMutableStateFlow <SharedKotlinx_coroutines_coreStateFlow, SharedKotlinx_coroutines_coreMutableSharedFlow>
@required
- (void)setValue:(id _Nullable)value __attribute__((swift_name("setValue(_:)")));
- (BOOL)compareAndSetExpect:(id _Nullable)expect update:(id _Nullable)update __attribute__((swift_name("compareAndSet(expect:update:)")));
@end

__attribute__((swift_name("CommonMutableStateFlow")))
@interface SharedCommonMutableStateFlow<T> : SharedCommonStateFlow<T> <SharedKotlinx_coroutines_coreMutableStateFlow>
- (instancetype)initWithFlow:(id<SharedKotlinx_coroutines_coreMutableStateFlow>)flow __attribute__((swift_name("init(flow:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<SharedKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
- (BOOL)compareAndSetExpect:(T _Nullable)expect update:(T _Nullable)update __attribute__((swift_name("compareAndSet(expect:update:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(T _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (void)resetReplayCache __attribute__((swift_name("resetReplayCache()")));
- (BOOL)tryEmitValue:(T _Nullable)value __attribute__((swift_name("tryEmit(value:)")));
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@property (readonly) id<SharedKotlinx_coroutines_coreStateFlow> subscriptionCount __attribute__((swift_name("subscriptionCount")));
@property T _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol SharedKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end

__attribute__((swift_name("DisposableHandle")))
@protocol SharedDisposableHandle <SharedKotlinx_coroutines_coreDisposableHandle>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSMutableStateFlow")))
@interface SharedIOSMutableStateFlow<T> : SharedCommonMutableStateFlow<T>
- (instancetype)initWithInitialValue:(T _Nullable)initialValue __attribute__((swift_name("init(initialValue:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithFlow:(id<SharedKotlinx_coroutines_coreMutableStateFlow>)flow __attribute__((swift_name("init(flow:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Timer")))
@interface SharedTimer : SharedBase
- (instancetype)initWithTime:(int64_t)time onTick:(void (^)(void))onTick __attribute__((swift_name("init(time:onTick:)"))) __attribute__((objc_designated_initializer));
- (void)cancelTimer __attribute__((swift_name("cancelTimer()")));
- (void)startTimer __attribute__((swift_name("startTimer()")));
@property (readonly) void (^onTick)(void) __attribute__((swift_name("onTick")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BoardBuilder")))
@interface SharedBoardBuilder : SharedBase
- (instancetype)initWithRows:(int32_t)rows columns:(int32_t)columns __attribute__((swift_name("init(rows:columns:)"))) __attribute__((objc_designated_initializer));
- (void)buildWordsList:(NSMutableArray<SharedWord *> *)wordsList __attribute__((swift_name("build(wordsList:)")));
- (NSMutableArray<NSMutableArray<SharedLetter *> *> *)getBoard __attribute__((swift_name("getBoard()")));
@end

__attribute__((swift_name("BoardEvents")))
@interface SharedBoardEvents : SharedBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BoardEvents.GameStarted")))
@interface SharedBoardEventsGameStarted : SharedBoardEvents
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)gameStarted __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedBoardEventsGameStarted *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BoardEvents.LetterSwiped")))
@interface SharedBoardEventsLetterSwiped : SharedBoardEvents
- (instancetype)initWithPositions:(NSArray<SharedInt *> *)positions __attribute__((swift_name("init(positions:)"))) __attribute__((objc_designated_initializer));
- (SharedBoardEventsLetterSwiped *)doCopyPositions:(NSArray<SharedInt *> *)positions __attribute__((swift_name("doCopy(positions:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedInt *> *positions __attribute__((swift_name("positions")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BoardEvents.OnCanel")))
@interface SharedBoardEventsOnCanel : SharedBoardEvents
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)onCanel __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedBoardEventsOnCanel *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BoardEvents.OnPause")))
@interface SharedBoardEventsOnPause : SharedBoardEvents
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)onPause __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedBoardEventsOnPause *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BoardEvents.OnResume")))
@interface SharedBoardEventsOnResume : SharedBoardEvents
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)onResume __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedBoardEventsOnResume *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BoardEvents.UserSwiped")))
@interface SharedBoardEventsUserSwiped : SharedBoardEvents
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)userSwiped __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedBoardEventsUserSwiped *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BoardState")))
@interface SharedBoardState : SharedBase
- (instancetype)initWithGrid:(NSArray<NSArray<SharedLetter *> *> *)grid percent:(float)percent time:(NSString *)time points:(int32_t)points isNavigate:(BOOL)isNavigate stars:(int32_t)stars remainingAnswers:(NSArray<NSString *> *)remainingAnswers id:(NSString *)id falehFeel:(SharedFalehFeel *)falehFeel __attribute__((swift_name("init(grid:percent:time:points:isNavigate:stars:remainingAnswers:id:falehFeel:)"))) __attribute__((objc_designated_initializer));
- (SharedBoardState *)doCopyGrid:(NSArray<NSArray<SharedLetter *> *> *)grid percent:(float)percent time:(NSString *)time points:(int32_t)points isNavigate:(BOOL)isNavigate stars:(int32_t)stars remainingAnswers:(NSArray<NSString *> *)remainingAnswers id:(NSString *)id falehFeel:(SharedFalehFeel *)falehFeel __attribute__((swift_name("doCopy(grid:percent:time:points:isNavigate:stars:remainingAnswers:id:falehFeel:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property SharedFalehFeel *falehFeel __attribute__((swift_name("falehFeel")));
@property (readonly) NSArray<NSArray<SharedLetter *> *> *grid __attribute__((swift_name("grid")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property BOOL isNavigate __attribute__((swift_name("isNavigate")));
@property (readonly) float percent __attribute__((swift_name("percent")));
@property int32_t points __attribute__((swift_name("points")));
@property NSArray<NSString *> *remainingAnswers __attribute__((swift_name("remainingAnswers")));
@property int32_t stars __attribute__((swift_name("stars")));
@property (readonly) NSString *time __attribute__((swift_name("time")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BoardViewModel")))
@interface SharedBoardViewModel : SharedBase
- (instancetype)initWithCoroutineScope:(id<SharedKotlinx_coroutines_coreCoroutineScope> _Nullable)coroutineScope context:(NSObject *)context __attribute__((swift_name("init(coroutineScope:context:)"))) __attribute__((objc_designated_initializer));
- (void)onEventEvent:(SharedBoardEvents *)event __attribute__((swift_name("onEvent(event:)")));
@property (readonly) SharedCommonStateFlow<SharedSoundState *> *soundState __attribute__((swift_name("soundState")));
@property (readonly) SharedCommonStateFlow<SharedBoardState *> *state __attribute__((swift_name("state")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol SharedKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface SharedKotlinEnum<E> : SharedBase <SharedKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FalehFeel")))
@interface SharedFalehFeel : SharedKotlinEnum<SharedFalehFeel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedFalehFeel *idle __attribute__((swift_name("idle")));
@property (class, readonly) SharedFalehFeel *sleep __attribute__((swift_name("sleep")));
@property (class, readonly) SharedFalehFeel *correct __attribute__((swift_name("correct")));
+ (SharedKotlinArray<SharedFalehFeel *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedFalehFeel *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Orientation")))
@interface SharedOrientation : SharedKotlinEnum<SharedOrientation *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedOrientation *vertical __attribute__((swift_name("vertical")));
@property (class, readonly) SharedOrientation *horizontal __attribute__((swift_name("horizontal")));
+ (SharedKotlinArray<SharedOrientation *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedOrientation *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SoundState")))
@interface SharedSoundState : SharedBase
- (instancetype)initWithId:(NSString *)id soundState:(SharedSoundType *)soundState __attribute__((swift_name("init(id:soundState:)"))) __attribute__((objc_designated_initializer));
- (SharedSoundState *)doCopyId:(NSString *)id soundState:(SharedSoundType *)soundState __attribute__((swift_name("doCopy(id:soundState:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property SharedSoundType *soundState __attribute__((swift_name("soundState")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SoundType")))
@interface SharedSoundType : SharedKotlinEnum<SharedSoundType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedSoundType *started __attribute__((swift_name("started")));
@property (class, readonly) SharedSoundType *correctSwipe __attribute__((swift_name("correctSwipe")));
@property (class, readonly) SharedSoundType *wrongSwipe __attribute__((swift_name("wrongSwipe")));
@property (class, readonly) SharedSoundType *halfTime __attribute__((swift_name("halfTime")));
@property (class, readonly) SharedSoundType *idle __attribute__((swift_name("idle")));
+ (SharedKotlinArray<SharedSoundType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedSoundType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("HomeEvents")))
@interface SharedHomeEvents : SharedBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HomeEvents.GetLevel")))
@interface SharedHomeEventsGetLevel : SharedHomeEvents
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)getLevel __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedHomeEventsGetLevel *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HomeState")))
@interface SharedHomeState : SharedBase
- (instancetype)initWithId:(NSString *)id userLevel:(SharedUserLevel *)userLevel __attribute__((swift_name("init(id:userLevel:)"))) __attribute__((objc_designated_initializer));
- (SharedHomeState *)doCopyId:(NSString *)id userLevel:(SharedUserLevel *)userLevel __attribute__((swift_name("doCopy(id:userLevel:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) SharedUserLevel *userLevel __attribute__((swift_name("userLevel")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HomeViewModel")))
@interface SharedHomeViewModel : SharedBase
- (instancetype)initWithCourotineScope:(id<SharedKotlinx_coroutines_coreCoroutineScope> _Nullable)courotineScope context:(NSObject *)context __attribute__((swift_name("init(courotineScope:context:)"))) __attribute__((objc_designated_initializer));
- (void)onEventEvents:(SharedHomeEvents *)events __attribute__((swift_name("onEvent(events:)")));
@property (readonly) SharedCommonStateFlow<SharedHomeState *> *state __attribute__((swift_name("state")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Letter")))
@interface SharedLetter : SharedBase
- (instancetype)initWithId:(NSString *)id letter:(NSString *)letter isSwiped:(BOOL)isSwiped isSelected:(BOOL)isSelected isWrong:(BOOL)isWrong __attribute__((swift_name("init(id:letter:isSwiped:isSelected:isWrong:)"))) __attribute__((objc_designated_initializer));
- (SharedLetter *)doCopyId:(NSString *)id letter:(NSString *)letter isSwiped:(BOOL)isSwiped isSelected:(BOOL)isSelected isWrong:(BOOL)isWrong __attribute__((swift_name("doCopy(id:letter:isSwiped:isSelected:isWrong:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property BOOL isSelected __attribute__((swift_name("isSelected")));
@property BOOL isSwiped __attribute__((swift_name("isSwiped")));
@property BOOL isWrong __attribute__((swift_name("isWrong")));
@property NSString *letter __attribute__((swift_name("letter")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserLevel")))
@interface SharedUserLevel : SharedBase
- (instancetype)initWithLevel:(int32_t)level xp:(float)xp isFirstTime:(BOOL)isFirstTime __attribute__((swift_name("init(level:xp:isFirstTime:)"))) __attribute__((objc_designated_initializer));
- (SharedUserLevel *)doCopyLevel:(int32_t)level xp:(float)xp isFirstTime:(BOOL)isFirstTime __attribute__((swift_name("doCopy(level:xp:isFirstTime:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property BOOL isFirstTime __attribute__((swift_name("isFirstTime")));
@property (readonly) int32_t level __attribute__((swift_name("level")));
@property (readonly) float xp __attribute__((swift_name("xp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Word")))
@interface SharedWord : SharedBase
- (instancetype)initWithId:(NSString *)id word:(NSString *)word __attribute__((swift_name("init(id:word:)"))) __attribute__((objc_designated_initializer));
- (SharedWord *)doCopyId:(NSString *)id word:(NSString *)word __attribute__((swift_name("doCopy(id:word:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *word __attribute__((swift_name("word")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DateSetKt")))
@interface SharedDateSetKt : SharedBase
@property (class, readonly) NSArray<NSString *> *fourLetterArabicWords __attribute__((swift_name("fourLetterArabicWords")));
@property (class, readonly) SharedKotlinArray<NSString *> *threeLetterArabicWords __attribute__((swift_name("threeLetterArabicWords")));
@property (class, readonly) NSArray<NSString *> *twoLetterArabicWords __attribute__((swift_name("twoLetterArabicWords")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LocalDataStoreKt")))
@interface SharedLocalDataStoreKt : SharedBase
@property (class, readonly) NSString *LEVEL_KEY __attribute__((swift_name("LEVEL_KEY")));
@property (class, readonly) NSString *XP_KEY __attribute__((swift_name("XP_KEY")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SPKt")))
@interface SharedSPKt : SharedBase
+ (int32_t)getInt:(NSObject *)receiver key:(NSString *)key __attribute__((swift_name("getInt(_:key:)")));
+ (void)setInt:(NSObject *)receiver key:(NSString *)key value:(int32_t)value __attribute__((swift_name("setInt(_:key:value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommonFlowKt")))
@interface SharedCommonFlowKt : SharedBase
+ (SharedCommonFlow<id> *)toCommonFlow:(id<SharedKotlinx_coroutines_coreFlow>)receiver __attribute__((swift_name("toCommonFlow(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommonMutableStateFlowKt")))
@interface SharedCommonMutableStateFlowKt : SharedBase
+ (SharedCommonMutableStateFlow<id> *)toCommonMutableStateFlow:(id<SharedKotlinx_coroutines_coreMutableStateFlow>)receiver __attribute__((swift_name("toCommonMutableStateFlow(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommonStateFlowKt")))
@interface SharedCommonStateFlowKt : SharedBase
+ (SharedCommonStateFlow<id> *)toCommonStateFlow:(id<SharedKotlinx_coroutines_coreStateFlow>)receiver __attribute__((swift_name("toCommonStateFlow(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommonUUIDKt")))
@interface SharedCommonUUIDKt : SharedBase
+ (NSString *)randomUUID __attribute__((swift_name("randomUUID()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UtilKt")))
@interface SharedUtilKt : SharedBase
+ (NSString *)formatMillisecondsToMinutesMilliseconds:(int64_t)milliseconds __attribute__((swift_name("formatMillisecondsToMinutes(milliseconds:)")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface SharedKotlinThrowable : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (SharedKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface SharedKotlinException : SharedKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface SharedKotlinRuntimeException : SharedKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface SharedKotlinIllegalStateException : SharedKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface SharedKotlinCancellationException : SharedKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol SharedKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<SharedKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinCoroutineContext")))
@protocol SharedKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<SharedKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<SharedKotlinCoroutineContextElement> _Nullable)getKey:(id<SharedKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<SharedKotlinCoroutineContext>)minusKeyKey:(id<SharedKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<SharedKotlinCoroutineContext>)plusContext:(id<SharedKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol SharedKotlinCoroutineContextElement <SharedKotlinCoroutineContext>
@required
@property (readonly) id<SharedKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface SharedKotlinAbstractCoroutineContextElement : SharedBase <SharedKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<SharedKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<SharedKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol SharedKotlinContinuationInterceptor <SharedKotlinCoroutineContextElement>
@required
- (id<SharedKotlinContinuation>)interceptContinuationContinuation:(id<SharedKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<SharedKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface SharedKotlinx_coroutines_coreCoroutineDispatcher : SharedKotlinAbstractCoroutineContextElement <SharedKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<SharedKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKotlinx_coroutines_coreCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));
- (void)dispatchContext:(id<SharedKotlinCoroutineContext>)context block:(id<SharedKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)dispatchYieldContext:(id<SharedKotlinCoroutineContext>)context block:(id<SharedKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<SharedKotlinContinuation>)interceptContinuationContinuation:(id<SharedKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<SharedKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (SharedKotlinx_coroutines_coreCoroutineDispatcher *)limitedParallelismParallelism:(int32_t)parallelism __attribute__((swift_name("limitedParallelism(parallelism:)")));
- (SharedKotlinx_coroutines_coreCoroutineDispatcher *)plusOther:(SharedKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<SharedKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface SharedKotlinEnumCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface SharedKotlinArray<T> : SharedBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(SharedInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<SharedKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol SharedKotlinCoroutineContextKey
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuation")))
@protocol SharedKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<SharedKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface SharedKotlinAbstractCoroutineContextKey<B, E> : SharedBase <SharedKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<SharedKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<SharedKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher.Key")))
@interface SharedKotlinx_coroutines_coreCoroutineDispatcherKey : SharedKotlinAbstractCoroutineContextKey<id<SharedKotlinContinuationInterceptor>, SharedKotlinx_coroutines_coreCoroutineDispatcher *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<SharedKotlinCoroutineContextKey>)baseKey safeCast:(id<SharedKotlinCoroutineContextElement> _Nullable (^)(id<SharedKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKotlinx_coroutines_coreCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol SharedKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol SharedKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
