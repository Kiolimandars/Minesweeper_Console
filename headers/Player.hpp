#ifndef DEMINEUR_H
#define DEMINEUR_H
#include <iostream>
#include <string>
using namespace std;

class Player
{
   protected :
   string name;
   unsigned short nbrV;
   unsigned short nbrdef;

    public:
     //si le Player est un visiteur, appel à un constructeur par défaut.
    Player(string);
    ~Player();
   unsigned short getV(); //revoie le nombre de victoire
   unsigned short getDef(); //revoie le nombre d'echec
   void setV(); //incrémenter le nombre de victoire
   void setDef(); //incrémenter le nombre d'echec

};


#endif
