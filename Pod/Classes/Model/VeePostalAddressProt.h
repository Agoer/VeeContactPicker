@import Foundation;

NS_ASSUME_NONNULL_BEGIN

@protocol VeePostalAddressProt <NSObject>

- (NSString*)street;
- (NSString*)city;
- (NSString*)state;
- (NSString*)postal;
- (NSString*)country;
- (NSString*)unifiedAddress;

@end

NS_ASSUME_NONNULL_END
