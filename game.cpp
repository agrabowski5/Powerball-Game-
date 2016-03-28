//
//  game.cpp
//  Project 5
//
//  Created by Andrew Grabowski on 2/20/16.
//  Copyright © 2016 Andrew Grabowski. All rights reserved.
//

#include <stdio.h>
#include "PowerballTicket.h"
#include "PowerballLottery.h"
#include "RandomNumber.h"
#include <iostream>
#include <string>
#include <cassert>

using namespace std;

int main()
{
    
    // test code
    PowerballTicket ticket( 1, 2, 3, 4, 5, 6 );
    assert( ticket.getBall1() == 1);
    assert( ticket.getBall2() == 2);
    assert( ticket.getBall3() == 3);
    assert( ticket.getBall4() == 4);
    assert( ticket.getBall5() == 5);
    assert( ticket.getPowerball() == 6);
    
    PowerballLottery lottery( 1, 2, 3, 4, 5, 6 );
    assert( lottery.getBall1() == 1);
    assert( lottery.getBall2() == 2);
    assert( lottery.getBall3() == 3);
    assert( lottery.getBall4() == 4);
    assert( lottery.getBall5() == 5);
    assert( lottery.getPowerball() == 6);
    assert( lottery.checkTicket(ticket) == PowerballLottery::WinningPossibility::FIVEPLUSPOWERBALL);
    ticket = PowerballTicket( 1, 2, 3, 4, 5, 12 );
    assert( lottery.checkTicket(ticket) == PowerballLottery::WinningPossibility::FIVE);
    ticket = PowerballTicket( 3, 1, 12, 54, 54, 43);
    
    lottery.printWhatHappened(ticket);
    
    PowerballLottery lottery1;
    cout << lottery1.getBall1()<<endl;
    cout << lottery1.getBall2()<<endl;
    cout << lottery1.getBall3()<<endl;
    cout << lottery1.getBall4()<<endl;
    cout << lottery1.getBall5()<<endl;
    cout << lottery1.getPowerball()<<endl;
    
    PowerballTicket quickPickTicket( 1, 2, 3, 4, 5, 6);
    for (int i = 0; i < 20; i++)
    {
        quickPickTicket = lottery.quickPick();
        // all the ball numbers need to be different...
        assert( quickPickTicket.getBall1() != quickPickTicket.getBall2() &&
               quickPickTicket.getBall1() != quickPickTicket.getBall3() &&
               quickPickTicket.getBall1() != quickPickTicket.getBall4() &&
               quickPickTicket.getBall1() != quickPickTicket.getBall5() &&
               quickPickTicket.getBall2() != quickPickTicket.getBall3() &&
               quickPickTicket.getBall2() != quickPickTicket.getBall4() &&
               quickPickTicket.getBall2() != quickPickTicket.getBall5() &&
               quickPickTicket.getBall3() != quickPickTicket.getBall4() &&
               quickPickTicket.getBall3() != quickPickTicket.getBall5() &&
               quickPickTicket.getBall4() != quickPickTicket.getBall5());
    }
    lottery.printWhatHappened(ticket);
    
    
    cout << "All Tests passed!" << endl;
    return 0;
    
}
