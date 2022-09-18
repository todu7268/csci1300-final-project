// CS1300 Fall 2021
// Author: Tome Dudanov
// Recitation: 313 - Kaleb Bishop
// Project 3  - Code Skeleton (Cars Driver File)
#include "Cars.h"
using namespace std;
/*
 * This file will not be part of the final project 3 submission, it's just used for testing.
 */
int main()
{
    Cars car;
    car.setModel("Audi R8");
    car.setTransmission("Manual");
    car.setSC(78);
    cout<<"The car's model is "<<car.getModel()<<", the transmission is "<<car.getTransmission();
    cout<<" and the street cred it'll get you in this game is "<<car.getSC()<<endl;
    return 0;
}