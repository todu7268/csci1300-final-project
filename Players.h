// CS1300 Fall 2021
// Author: Tome Dudanov
// Recitation: 313 - Kaleb Bishop
// Project 3  - Code Skeleton (Players Class)
#ifndef MAP_H_PLAYERS_H
#define MAP_H_PLAYERS_H
#include <iostream>
#include <fstream>

using namespace std;

class Players
{
private:
    string player_name;
    string player_progress_filename;
public:
    Players();
    string getPlayerName();
    string getPlayerProgressFile();
    void setPlayerName(string);
    void setPlayerProgressFile(string);
};
#endif
