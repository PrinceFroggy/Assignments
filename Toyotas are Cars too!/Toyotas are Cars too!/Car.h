//
//  Car.h
//  Toyotas are Cars too!
//
//  Created by Andrew Solesa on 2017-01-24.
//  Copyright © 2017 KSG. All rights reserved.
//

#ifndef Car_h
#define Car_h

@interface Car : NSObject

@property NSString *model;

- (void) drive;
- (id) initWithModel:(NSString *)model;

@end

#endif /* Car_h */
