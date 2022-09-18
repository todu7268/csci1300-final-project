// CS1300 Fall 2021
// Author: Tome Dudanov
// Recitation: 313 - Kaleb Bishop
// Project 3  - Code Skeleton (Leaderboard CPP File)
#include "Leaderboard.h"
using namespace std;
Leaderboard::Leaderboard(){
    name.setNPCName("");
    name.setNPCCar("","", 0);
    total_sc = 0;
}
string Leaderboard::getName(){
    return name.getNPCName();
}
void Leaderboard::setName(string a){
    name.setNPCName(a);
}
unsigned int Leaderboard::getTotalSC(){
    return total_sc;
}
void Leaderboard::setTotalSC(int races_won){
    total_sc = races_won + name.getNPCCarSC();
}