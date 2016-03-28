//
//  PowerballLottery.cpp
//  Project 5
//
//  Created by Andrew Grabowski on 2/20/16.
//  Copyright © 2016 Andrew Grabowski. All rights reserved.
//

#include "PowerballLottery.h"
#include "RandomNumber.h"
#include <iostream>
#include "PowerballTicket.h"
using namespace std;
//defines random numbers to the lottery
PowerballLottery::PowerballLottery()
{
    RandomNumber d(1,69);// ball1-5 can be 1-69
    ball1 = d.random();
    ball2 = d.random();
    while(ball1 == ball2) ball2 = d.random();
    ball3 = d.random();
    while(ball3 == ball2 || ball3 == ball1) ball3 = d.random();
    ball4 = d.random();
    while (ball4 == ball3 || ball4 == ball2 || ball4 == ball1) ball4 = d.random();
    ball5 = d.random();
    while (ball5 == ball4 || ball5 == ball3 || ball5 == ball2 || ball5 == ball1) ball5 = d.random();
    RandomNumber pb(1,26);//powerball can only be between 1-26
    pball = pb.random();
    
}
//allows you to define lottery numbers through the input of PowerballLottery
PowerballLottery::PowerballLottery(int b1, int b2, int b3, int b4, int b5, int powerball)
    {
        ball1 = b1;
        ball2 = b2;
        ball3 = b3;
        ball4 = b4;
        ball5 = b5;
        pball = powerball;
        
        
    }
//Quickpick allows for the ticket to have random numbers assigned to it
PowerballTicket PowerballLottery::quickPick()
{
    int ball1 =0, ball2 =0, ball3 =0, ball4 = 0, ball5 = 0, pball = 0;
    RandomNumber d(1,69);
    ball1 = d.random();
    ball2 = d.random();
    while(ball1 == ball2) ball2 = d.random();
    ball3 = d.random();
    while(ball3 == ball2 || ball3 == ball1) ball3 = d.random();
    ball4 = d.random();
    while (ball4 == ball3 || ball4 == ball2 || ball4 == ball1) ball4 = d.random();
    ball5 = d.random();
    while (ball5 == ball4 || ball5 == ball3 || ball5 == ball2 || ball5 == ball1) ball5 = d.random();
    RandomNumber pb(1,26);
    pball = pb.random();
    

    return PowerballTicket( ball1, ball2, ball3, ball4, ball5, pball);
}

//Checks the ticket value previously defined compared to the lottery ball values, this returns a value of
//WiiningProbability

PowerballLottery::WinningPossibility PowerballLottery::checkTicket( PowerballTicket ticket )
{
    int counter = 0;
    int p = 0;
    if(ticket.getBall1() == getBall1() || ticket.getBall1() == getBall2() || ticket.getBall1() == getBall3() || ticket.getBall1() == getBall4() || ticket.getBall1() == getBall5())
        counter ++;
    if (ticket.getBall2() == getBall1() || ticket.getBall2() == getBall2() || ticket.getBall2() == getBall3() || ticket.getBall2() == getBall4() || ticket.getBall2() == getBall5()) {
        counter++;
    }
    if (ticket.getBall3() == getBall1() || ticket.getBall3() == getBall2() || ticket.getBall3() == getBall3() || ticket.getBall3() == getBall4() || ticket.getBall3() == getBall5()) {
        counter++;
    }
    if (ticket.getBall4() == getBall1() || ticket.getBall4() == getBall2() || ticket.getBall4() == getBall3() || ticket.getBall4() == getBall4() || ticket.getBall4() == getBall5()) {
        counter++;
    }
    if (ticket.getBall5() == getBall1() || ticket.getBall5() == getBall2() || ticket.getBall5() == getBall3() || ticket.getBall5() == getBall4() || ticket.getBall5() == getBall5()) {
        counter++;
    }
    if(ticket.getPowerball() == getPowerball())
    {
        p++;
    }
    
    if (counter == 0 && p == 1)
        return POWERBALL;
    if( counter == 1 && p == 1)
        return ONEPLUSPOWERBALL;
    if ( counter == 2 && p == 1)
        return TWOPLUSPOWERBALL;
    if (counter == 3 && p == 0)
        return THREE;
    if (counter == 3 && p == 1)
        return THREEPLUSPOWERBALL;
    if (counter == 4 && p == 0)
        return FOUR;
    if (counter == 4 && p == 1)
        return FOURPLUSPOWERBALL;
    if (counter == 5 && p == 0)
        return FIVE;
    if (counter == 5 && p == 1)
        return FIVEPLUSPOWERBALL;
    else
        return NOTWINNING;
   
}

//This actually prints to cout results of the balls chosen, it returns pre defined sentances given by stahl
void PowerballLottery::printWhatHappened( PowerballTicket ticket )
{
    if(checkTicket(ticket) == PowerballLottery::NOTWINNING)
        cout << "You didn't win anything.  Please buy another ticket!" << endl;
    if(checkTicket(ticket) == PowerballLottery::POWERBALL)
        cout << "You matched just the powerball.  Congratulations!" << endl;
    if(checkTicket(ticket) == PowerballLottery::ONEPLUSPOWERBALL)
        cout << "You matched one ball plus the powerball.  Congratulations!" << endl;
    if(checkTicket(ticket) == PowerballLottery::TWOPLUSPOWERBALL)
        cout << "You matched two balls plus the powerball.  Congratulations!" << endl;
    if(checkTicket(ticket) == PowerballLottery::THREEPLUSPOWERBALL)
        cout << "You matched three balls plus the powerball.  Congratulations!" << endl;
    if(checkTicket(ticket) == PowerballLottery::THREE)
        cout << "You matched three balls but not the powerball.  Congratulations!" << endl;
    if(checkTicket(ticket) == PowerballLottery::FOURPLUSPOWERBALL)
        cout << "You matched four balls plus the powerball.  Congratulations!" << endl;
    if(checkTicket(ticket) == PowerballLottery::FOUR)
        cout << "You matched four balls but not the powerball.  Congratulations!" << endl;
    if(checkTicket(ticket) == PowerballLottery::FIVE)
        cout << "You matched five balls but not the powerball.  Congratulations!" << endl;
    if(checkTicket(ticket) == PowerballLottery::FIVEPLUSPOWERBALL)
        cout << "You won the jackpot - all balls plus the powerball.  Congratulations!" << endl; 
}


    int PowerballLottery::getBall1(){
        return ball1;
    }
    
    int PowerballLottery::getBall2(){
        return ball2;
    }
    
    int PowerballLottery::getBall3(){
        return ball3;
    }
    
    int PowerballLottery::getBall4(){
        return ball4;
    }
    
    int PowerballLottery::getBall5(){
        return ball5;
    }
    
    int PowerballLottery::getPowerball(){
        return pball;
    }

