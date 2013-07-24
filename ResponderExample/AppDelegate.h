//
//  AppDelegate.h
//  ResponderExample
//
//  Created by 양 원석 on 2013. 7. 25..
//  Copyright (c) 2013년 양 원석. All rights reserved.
//

#import <UIKit/UIKit.h>


/**** HIERARCHY *****
 
 --------------------
 |  ViewController  |
 |------------------|
 |     View1        |
 |------------------|
 |     View2        |
 |------------------|
 |        |         |
 | View3  |         |
 |        |  View4  |
 |        |         |
 --------------------
 
 View4
 View3
 View2
 View1
 ViewController
 DefaultWindow
 */

@class CustomWindow;
@class ViewController;

@interface AppDelegate : UIResponder// <UIApplicationDelegate>

@property (strong, nonatomic) CustomWindow *window;
@property (strong, nonatomic) ViewController *viewController;

@end
