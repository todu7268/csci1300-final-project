#include "NPCs.h"
using namespace std;

int main(){
    NPCs John;
    John.setNPCName("John");
    John.setNPCCar("Mitsubishi Lancer Evolution IX", "Manual", 72);

    cout<<"This NPC's name is "<<John.getNPCName();
    cout<<", and his car is "<<John.getNPCCarModel()<<endl;
    cout<<"It has a "<<John.getNPCCarTransmission()<<" transmission, and the street cred number it gets him is ";
    cout<<John.getNPCCarSC();

    return 0;
}