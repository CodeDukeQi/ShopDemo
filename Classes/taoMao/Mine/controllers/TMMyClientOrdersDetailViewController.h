//
//  TMMyClientOrdersDetailViewController.h
//  TaoMao
//
//  Created by mac on 14-4-25.
//  Copyright (c) 2014年 mac. All rights reserved.
//

#import "LTKViewController.h"

@interface TMMyClientOrdersDetailViewController : LTKViewController<UITableViewDataSource,UITableViewDelegate>
{
    UIView                      *view_bar;
    UITableView                 *_tableView;
    int                 selectCount;
    UIImageView * imgv_arrow;
}


@end
