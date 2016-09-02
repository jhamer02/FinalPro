//
//  DestinationDetails.h
//  Lab05
//
//  Created by Jorge Jhamil Pineda Echeverria on 29/06/16.
//  Copyright © 2016 jjpe. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DestinationDetails : UIViewController

@property NSString *destinationTitle;
@property NSString *destinationDescription;
@property NSString *destinationPhoto;

@property (strong, nonatomic) IBOutlet UIImageView *imgDestination;
@property (strong, nonatomic) IBOutlet UILabel *lblDestination;
@property (strong, nonatomic) IBOutlet UILabel *lblDestinationDetails;


@end
