//
//  ViewController.h
//  YNotes
//
//  Created by Prince on 4/29/16.
//  Copyright © 2016 Prince. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Note.h"
#import "UIScrollView+APParallaxHeader.h"
#import "IGLDropDownMenu.h"
#import "IGLDropDownItem.h"

@interface ViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UITextViewDelegate, UIPickerViewDelegate, UIPickerViewDataSource, UISearchBarDelegate, IGLDropDownMenuDelegate>

@property NSMutableArray *desc;

@property NSMutableArray *title;
@property (nonatomic, strong) NSMutableArray *initialDisplayArr;


@property NSMutableDictionary *userFile;

@property (nonatomic, weak) NSUserDefaults *userDefaults;

@property bool edit;


@end

