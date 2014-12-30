#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

#import "CookieWhitelist.h"
#import "WebViewController.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

@property (strong, atomic) WebViewController *webViewController;
@property (strong, atomic) NSHTTPCookieStorage *cookieStorage;
@property (strong, atomic) CookieWhitelist *cookieWhitelist;

@property (readonly, strong, nonatomic) NSMutableDictionary *searchEngines;

@property (strong, atomic) NSString *defaultUserAgent;

- (void)removeCookiesForDomain:(NSString *)domain;

@end
