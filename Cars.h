// CS1300 Fall 2021
// Author: Tome Dudanov
// Recitation: 313 - Kaleb Bishop
// Project 3  - Code Skeleton (Cars Header File)
#ifndef CARS_H
#define CARS_H
#include <iostream>
#include <fstream>
using namespace std;
/*
 * I'm making an underground racing story game, cars will be a big focus, I'll need to keep track of a lot.
 * Easiest way to do it is to make a Cars object.
 */
class Cars{
private:
    string model;
    string transmission;
    unsigned int sc;
public:
    Cars();
    void setModel(string);
    string getModel();
    void setTransmission(string);
    string getTransmission();
    void setSC(unsigned int);
    unsigned int getSC();
};
#endif
