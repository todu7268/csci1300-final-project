// CS1300 Fall 2021
// Author: Tome Dudanov
// Recitation: 313 - Kaleb Bishop
// Project 3  - Code Skeleton (Cars CPP File)
#include "Cars.h"
using namespace std;

Cars::Cars(){
    model = "";
    transmission = "";
    sc=0;
}
void Cars::setModel(string a){
    model = a;
}
string Cars::getModel(){
    return model;
}
void Cars::setTransmission(string a){
    transmission = a;
}
string Cars::getTransmission(){
    return transmission;
}
void Cars::setSC(unsigned int a){
    if (a > 0 && a < 100)
        sc = a;
}
unsigned int Cars::getSC(){
    return sc;
}