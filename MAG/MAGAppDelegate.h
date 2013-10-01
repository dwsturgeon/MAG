//
//  MAGAppDelegate.h
//  MAG
//
//  Created by Devin Sturgeon on 9/30/13.
//  Copyright (c) 2013 Devin Sturgeon. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MAGAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
