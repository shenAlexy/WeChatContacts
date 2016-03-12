//
//  ContactModel.h
//  WeChatContacts-demo
//
//  Created by shen_gh on 16/3/12.
//  Copyright © 2016年 com.joinup(Beijing). All rights reserved.
//

#import "JSONModel.h"

@interface ContactModel : JSONModel

@property (nonatomic,strong) NSString <Optional>*portrait;
@property (nonatomic,strong) NSString <Optional>*name;
@property (nonatomic,strong) NSString <Ignore>*pinyin;//拼音

- (instancetype)initWithDic:(NSDictionary *)dic;

@end
