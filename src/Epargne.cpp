#include "Epargne.h"
#include <string>
using namespace model;
using namespace std;

Epargne::Epargne():Compte()
{
    //ctor
}

int Epargne::depot(float mnt)
{
    this->solde += mnt+mnt*taux;
    return 1;
}

int Epargne::retrait(float mnt)
{
    Date * d = new Date();
    if(this->dateFinBlocage->compare(d->now()) == ANCIENNE){
        if(this->solde >= mnt){

        }else{
            return -1;
        }
    }else{
        return 0;
    }
}

Epargne::Epargne(string num, float solde, float taux, Date * dateFinBlocage):Compte(num, solde)
{
    this->taux = taux;
    this->dateFinBlocage = dateFinBlocage;
}

Epargne::~Epargne()
{
    //dtor
}
