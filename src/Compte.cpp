#include "Compte.h"
#include <string>
using namespace model;
using namespace std;
unsigned int Compte::cpt=0;
Compte::Compte()
{
    //ctor

    id = generateID();
}

int Compte::virement(Compte * c, float mnt)
{
    if(this->retrait(mnt) == 1){
        return c->depot(mnt);
    }else{
        return -1;
    }
}

Compte::Compte(string num, float solde)
{
    id = generateID();
    this->numero = num;
    this->solde = solde;
}

int Compte::generateID()
{
    Compte::cpt++;
    return cpt;
}
Compte::~Compte()
{
    //dtor
}
