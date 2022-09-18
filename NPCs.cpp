#include "NPCs.h"
using namespace std;

NPCs::NPCs(){
    npcname="";
    npccar.setModel("");
    npccar.setTransmission("");
    npccar.setSC(0);
}
void NPCs::setNPCName(string a){
    npcname = a;
}
string NPCs::getNPCName(){
    return npcname;
}
void NPCs::setNPCCar(string a, string b, unsigned int c){
    npccar.setModel(a);
    npccar.setTransmission(b);
    npccar.setSC(c);
}
string NPCs::getNPCCarModel(){
    return npccar.getModel();
}
string NPCs::getNPCCarTransmission(){
    return npccar.getTransmission();
}
unsigned int NPCs::getNPCCarSC(){
    return npccar.getSC();
}