// CS1300 Fall 2021
// Author: Tome Dudanov
// Recitation: 313 - Kaleb Bishop
// Project 3  - Code Skeleton (Leaderboard Header File)
#ifndef LEADERBOARD_H
#define LEADERBOARD_H
#include "Cars.h"
#include "NPCs.h"
using namespace std;
class Leaderboard{
private:
    NPCs name;
    unsigned int total_sc;
public:
    Leaderboard();
    string getName();
    void setName(string);
    unsigned int getTotalSC();
    void setTotalSC(int);
};
#endif