// CS1300 Fall 2021
// Author: Tome Dudanov
// Recitation: 313 - Kaleb Bishop
// Project 3  - Code Skeleton (Leaderboard Driver File)
#include "Leaderboard.h"
using namespace std;
/*
 * This is just being used for testing.
 */
int main()
{
    Leaderboard something;
    something.setName("Klime");
    something.setTotalSC(5);

    cout<<something.getName()<<"'s total street cred is "<<something.getTotalSC();
    return 0;
}

