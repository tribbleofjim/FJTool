//
//  FileTool.h
//  FJTool
//
//  Created by yifee L on 2020/12/24.
//

#ifndef FileTool_h
#define FileTool_h

#import <Foundation/Foundation.h>

@interface FileTool : NSObject

+(void)createFile:(NSString *)path;

+(NSArray *)getPathsFromFile:(NSString *)path;

@end


#endif /* FileTool_h */
