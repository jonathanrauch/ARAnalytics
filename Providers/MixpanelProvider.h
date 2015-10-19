#import "ARAnalyticalProvider.h"

@interface MixpanelProvider : ARAnalyticalProvider

@property (nonatomic, readonly) Mixpanel *mixpanel;
- (id)initWithIdentifier:(NSString *)identifier andHost:(NSString *)host;
- (void)createAlias:(NSString *)alias;

@end
