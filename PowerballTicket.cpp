//
//  main.cpp
//  Project 5
//
//  Created by Andrew Grabowski on 2/18/16.
//  Copyright © 2016 Andrew Grabowski. All rights reserved.
//
//PowerballTicket


#include "RandomNumber.h"
#include <iostream>
#include <string>
#include <cassert>
#include "PowerballTicket.h"
using namespace std;
//Assigns inputed Powerball ticket numebers to the powerball ticket 
PowerballTicket::PowerballTicket(int b1, int b2, int b3, int b4, int b5, int powerball)
{
    ball1 = b1;
    ball2 = b2;
    ball3 = b3;
    ball4 = b4;
    ball5 = b5;
    ballp = powerball;

}

    int PowerballTicket::getBall1(){
        return ball1;
    }

    int PowerballTicket::getBall2(){
        return ball2;
    }

    int PowerballTicket::getBall3(){
        return ball3;
    }

    int PowerballTicket::getBall4(){
        return ball4;
    }

    int PowerballTicket::getBall5(){
        return ball5;
    }

    int PowerballTicket::getPowerball(){
        return ballp;
    }


   



