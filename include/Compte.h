#ifndef COMPTE_H
#define COMPTE_H
#include<string>
#include<vector>
#include "Transaction.h"

using namespace std;
namespace model{
    class Compte
    {
        public:
            Compte();
            Compte(string num, float solde);
            virtual ~Compte();

            unsigned int Getid() { return id; }
            void Setid(unsigned int val) { id = val; }
            string Getnumero() { return numero; }
            void Setnumero(string val) { numero = val; }
            float Getsolde() { return solde; }
            void Setsolde(float val) { solde = val; }
            vector<Transaction*> Gettransactions() { return transactions; }
            void addTRansaction(Transaction* tr) { transactions.push_back(tr); }

            int virtual depot(float mnt)=0;
            int virtual retrait(float mnt)=0;
            int virement(Compte * c, float mnt);

        protected:
            string numero;
            float solde;
        private:
            static unsigned int cpt;
            unsigned int id;
            vector<Transaction*> transactions;
            int generateID();
    };
}
#endif // COMPTE_H
