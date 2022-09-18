// CS1300 Fall 2021
// Author: Tome Dudanov
// Recitation: 313 - Kaleb Bishop
// Project 3  - Code Skeleton (Players Driver)
#include "Players.h"
#include <iostream>
using namespace std;
/*
 * This will not be in my final Project 3 submission.
 * This is just a driver function to test my code, see how well it works, find bugs if any.
 */
int main()
{
    Players klime;
    klime.setPlayerName("Klime");
    klime.setPlayerProgressFile("Klime");

    cout<<"The player name is "<<klime.getPlayerName()<<" and the player's progress is stored in the file: "<<klime.getPlayerProgressFile()<<endl;
    return 0;
}