//
//  SDHomeGridItemModel.h
//  GSD_ZHIFUBAO
//
//  Created by aier on 15-6-3.
//  Copyright (c) 2015年 GSD. All rights reserved.
//

/*
 
 *********************************************************************************
 *
 * 在您使用此自动布局库的过程中如果出现bug请及时以以下任意一种方式联系我们，我们会及时修复bug并
 * 帮您解决问题。
 * 新浪微博:GSD_iOS
 * Email : gsdios@126.com
 * GitHub: https://github.com/gsdios
 *
 *********************************************************************************
 
 */

#import <Foundation/Foundation.h>

@interface SDHomeGridItemModel : NSObject

@property (nonatomic, copy) NSNumber* deviceID;
@property (nonatomic, copy) NSString *title;    //device name
@property (nonatomic, copy) NSString *imageResString;
@property (nonatomic, copy) NSNumber* currentStat;
@property (nonatomic, copy) NSDictionary* colorStatPair;    // @{1: [title, color, command_code]
@property (nonatomic, copy) Class destinationClass;

@end
