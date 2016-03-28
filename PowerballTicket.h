//
//  Header.h
//  Project 5
//
//  Created by Andrew Grabowski on 2/19/16.
//  Copyright © 2016 Andrew Grabowski. All rights reserved.
//

#ifndef Header_h
#define Header_h

//This is the class of Powerball Ticket that contains the numbers of Powerball ticket

class PowerballTicket
{
public:
    PowerballTicket (int b1, int b2, int b3, int b4, int b5, int powerball);
    
    int getBall1();
    int getBall2();
    int getBall3();
    int getBall4();
    int getBall5();
    int getPowerball();
   
private:
    int ball1, ball2, ball3, ball4, ball5, ballp;
    //we keep ball number in private to hide from user
    };

#endif /* Header_h */
