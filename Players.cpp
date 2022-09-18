// CS1300 Fall 2021
// Author: Tome Dudanov
// Recitation: 313 - Kaleb Bishop
// Project 3  - Code Skeleton (Players CPP file)
#include "Players.h"
using namespace std;

Players::Players()
{
    player_name = "";
    player_progress_filename = "";
}
string Players::getPlayerName()
{
    return player_name;
}
string Players::getPlayerProgressFile()
{
    return player_progress_filename;
}
void Players::setPlayerName(string a)
{
    player_name = a;
}
void Players::setPlayerProgressFile(string a)
{
    player_progress_filename = a + "_progress.txt";
}

