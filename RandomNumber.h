//
//  RandomNumber.h
//  Project 5
//
//  Created by Andrew Grabowski on 2/20/16.
//  Copyright © 2016 Andrew Grabowski. All rights reserved.
//

#ifndef RandomNumber_h
#define RandomNumber_h
//provided code
class RandomNumber
{
public:
    RandomNumber( int min, int max, bool minInclusive=true, bool maxInclusive=true );
    
    // supply a number between min and max inclusive
    int random( );
private:
    int  mMinimum, mMaximum;
};


#endif /* RandomNumber_h */
