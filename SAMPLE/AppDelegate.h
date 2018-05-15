//
//  AppDelegate.h
//  SAMPLE
//
//  Created by Lovina on 15/05/18.
//  Copyright © 2018 Lovina. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

