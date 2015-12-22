//
//  VeeContactPickerViewController.h
//  VeeContactPicker
//
//  Created by Andrea Cipriani on 14/12/15.
//  Copyright © 2015 Code Atlas SRL. All rights reserved.
//

#import "ABContactProt.h"
#import "VeeContactPickerDelegate.h"
#import <UIKit/UIKit.h>
@import AddressBook;

@interface VeeContactPickerViewController : UIViewController <UISearchBarDelegate, UISearchDisplayDelegate, UITableViewDelegate, UITableViewDataSource>

//When you want to show a detail label for all contacts, this enum defines which field to show into
typedef NS_ENUM(NSInteger, VeeContactDetail) {
    //Default
    VeeContactDetailPhoneNumber, //0
    VeeContactDetailEmail, //1
};

#pragma mark - Initializers

- (instancetype)initWithCompletionHandler:(void (^)(id<ABContactProt> abContact))didSelectABContact;
- (instancetype)initWithDelegate:(id<VeeContactPickerDelegate>)contactPickerDelegate;

#pragma mark - Outlets

@property (nonatomic, strong) IBOutlet UITableView* contactsTableView;
@property (weak, nonatomic) IBOutlet UIBarButtonItem* cancelBarButtonItem;
@property (weak, nonatomic) IBOutlet UINavigationItem *titleNavigationItem;

#pragma mark - IBActions

- (IBAction)cancelBarButtonItemPressed:(id)sender;

#pragma mark - Data source

@property (nonatomic) ABAddressBookRef addressBookRef;

@property (nonatomic, strong) NSArray<ABContactProt>* abContacts;
@property (nonatomic, strong) NSArray<NSString*>* allSectionIdentifiers;

@property (nonatomic, strong) NSArray<UIColor*>* contactLettersColorPalette; //Set your palette otherwise lightgraycolor will be used for all contact image placeholders

#pragma mark - Contact picker delegate

@property (nonatomic, strong) id<VeeContactPickerDelegate> contactPickerDelegate;

#pragma mark - Contact picker completion handler

@property (nonatomic, strong) void (^completionHandler)(id<ABContactProt>);

#pragma mark - Options

@property (nonatomic, assign) BOOL showContactDetailLabel;
@property (nonatomic, assign) VeeContactDetail veeContactDetail; //Default is VeeContactDetailPhoneNumber
@property (nonatomic, assign) BOOL showFirstNameFirst; //Default is YES; if NO show last name first

//TODO: firstNameOrSurnameOrderOption
//contactEmptyImageView

#pragma mark - Strings

//Override to localize the title
-(NSString*)localizedTitle;

//Override to localize the cancel button title
-(NSString*)localizedCancelButtonTitle;

#pragma mark - Appearance
//TODO: ...

@end
