#ifndef EPARGNE_H
#define EPARGNE_H

#include <Compte.h>
#include <string>
#include "Date.h"

using namespace utils;
using namespace std;
namespace model{
    class Epargne : public Compte
    {
        public:
            Epargne();
            Epargne(string num, float solde,float taux, Date * dateFinBlocage);
            virtual ~Epargne();

            float Gettaux() { return taux; }
            void Settaux(float val) { taux = val; }
            Date* GetdateFinBlocage() { return dateFinBlocage; }
            void SetdateFinBlocage(Date * val) { dateFinBlocage = val; }

            int depot(float mnt);
            int retrait(float mnt);
        protected:

        private:
            float taux;
            Date * dateFinBlocage;
    };
}
#endif // EPARGNE_H
