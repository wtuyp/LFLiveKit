//
//  RKStreamLog.h
//  LFLiveKit
//
//  Created by Ken Sun on 2017/9/21.
//  Copyright © 2017年 admin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>//dhlu,for CGFloat type.

@interface RKStreamLog : NSObject

// user id
@property (copy, nonatomic) NSString *uid;
// provider
@property (copy, nonatomic) NSString *pd;
// log type
//@property (copy, nonatomic) NSString *lt;//dhlu,不需要在这定义，因为每次调用logWithDict都有lt.
// os type
@property (copy, nonatomic) NSString *os;
// os version
@property (copy, nonatomic) NSString *osv;
// phone model
@property (copy, nonatomic) NSString *mod;
// carrier
@property (copy, nonatomic) NSString *cr;
// net type,2g,3g,4g,wifi
@property (copy, nonatomic) NSString *nt;
// logitude
@property (readwrite, nonatomic) CGFloat lnt;//dhlu
// latitude
@property (readwrite, nonatomic) CGFloat ltt;//dhlu
// region
@property (copy, nonatomic) NSString *rg;
// app version
@property (copy, nonatomic) NSString *av17;
// url host
@property (copy, nonatomic) NSString *host;
// scheme, protocal type
//@property (copy, nonatomic) NSString *pt;//dhlu 不再需要，url可以看出是什么协议类型.
// url
@property (copy, nonatomic) NSString *url;
// stream id
@property (copy, nonatomic) NSString *sid;
// ping round trip interval
//@property (copy, nonatomic) NSString *pingRtt;//dhlu,不再需要字符串类型.
// ping packet loss
//@property (copy, nonatomic) NSString *pingloss;//dhlu,不再需要字符串类型.
//dhlu initial time
@property (readwrite, nonatomic) NSTimeInterval initStartTime;
//end time.

@property (copy, nonatomic) void(^logCallback)(NSDictionary *log);

+ (instancetype)logger;

- (void)logWithDict:(NSDictionary *)dic;

- (void)fetchInfo;

- (void)fetchHostStatus;

@end

