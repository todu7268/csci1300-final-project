#ifndef NPCS_H
#define NPCS_H
#include <iostream>
#include <fstream>
#include "Cars.h"
class NPCs{
private:
    string npcname;
    Cars npccar;
public:
    NPCs();
    void setNPCName(string);
    string getNPCName();
    void setNPCCar(string, string, unsigned int);
    string getNPCCarModel();
    string getNPCCarTransmission();
    unsigned int getNPCCarSC();
};
#endif
