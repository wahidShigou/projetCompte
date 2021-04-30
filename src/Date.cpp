#include "Date.h"
#include <ctime>
#include <sstream>
using namespace utils;
enum{
    RECENTE=0,
    IDENTIQUE,
    ANCIENNE
};
Date::Date()
{
    //ctor
}

Date::~Date()
{
    //dtor
}
string Date::toString(){
    ostringstream geek("");
    geek << this->jj << " - " << this->mm << " - " << this->aa;
    return geek.str();
}
Date * Date::now()
{
    time_t actuel = time(0);
    tm * lmt = localtime(&actuel);
    Date * d = new Date();
    d->Setjour(lmt->tm_mday);
    d->Setmois(1+lmt->tm_mon);
    d->Setannee(1900+lmt->tm_year);
    return d;
}

int Date::compare(Date * dateDebut)
{
    if(this->aa < dateDebut->aa){
        return ANCIENNE;
    }else{
        if(this->aa > dateDebut->aa){
            return RECENTE;
        }else{
            if(this->mm < dateDebut->mm){
                return ANCIENNE;
            }else{
                if(this->mm > dateDebut->mm){
                    return RECENTE;
                }else{
                    if(this->jj < dateDebut->jj){
                        return ANCIENNE;
                    }else{
                        if(this->jj > dateDebut->jj){
                            return RECENTE;
                        }else{
                            return IDENTIQUE;
                        }
                    }
                }
            }
        }
    }


}
