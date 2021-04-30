#include "Cheque.h"

using namespace model;

Cheque::Cheque():Compte()
{
    //ctor
}

Cheque::Cheque(string num, float solde, float interet):Compte(num,solde)
{
    this->interet = interet;
}

Cheque::~Cheque()
{
    //dtor
}
