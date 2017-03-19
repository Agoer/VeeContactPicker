@import Foundation;
#import "VeeContactProt.h"
@class VeeContactUITableViewCell;
@class VeeContactPickerOptions;

NS_ASSUME_NONNULL_BEGIN

@interface VeeContactCellConfiguration : NSObject

#pragma mark - Initializers

- (instancetype)initWithVeePickerOptions:(VeeContactPickerOptions*)veeContactPickerOptions;

#pragma mark - Public Methods

- (void)configureCell:(VeeContactUITableViewCell*)veeContactUITableViewCell forVeeContact:(id<VeeContactProt>)veeContact;

@end

NS_ASSUME_NONNULL_END
