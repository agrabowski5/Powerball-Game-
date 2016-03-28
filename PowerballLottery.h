//
//  PowerballLottery.hpp
//  Project 5
//
//  Created by Andrew Grabowski on 2/20/16.
//  Copyright © 2016 Andrew Grabowski. All rights reserved.
//

#ifndef PowerballLottery_h
#define PowerballLottery_h

#include <stdio.h>
#include "RandomNumber.h"
#include "PowerballTicket.h"

class PowerballLottery
{
    public:
    
    PowerballLottery ();
    PowerballLottery (int b1, int b2, int b3, int b4, int b5, int powerball);
    
    //declares an enumberation of Winning possibility to be used in check ticket
    enum WinningPossibility
    {
        POWERBALL, ONEPLUSPOWERBALL, TWOPLUSPOWERBALL, THREE, THREEPLUSPOWERBALL, FOUR, FOURPLUSPOWERBALL,FIVE,FIVEPLUSPOWERBALL,NOTWINNING
    };
    
    int getBall1();
    int getBall2();
    int getBall3();
    int getBall4();
    int getBall5();
    int getPowerball();
    
    PowerballTicket quickPick( );
    PowerballLottery::WinningPossibility checkTicket( PowerballTicket ticket );
    void printWhatHappened( PowerballTicket ticket );
    

private:
        int ball1, ball2, ball3, ball4, ball5, pball;
//int are kept in private
};
#endif /* PowerballLottery_h */
