#ifndef TRANSACTION_H
#define TRANSACTION_H

#include "Date.h"
#include <vector>
#include <string>
#include<bits/stdc++.h>

using namespace utils;
using namespace std;

enum{
    DEPOT=1,
    RETRAIT,
    VIREMENT
}TRANSACTION;

namespace model{
    class Transaction
    {
        public:
            Transaction();
            virtual ~Transaction();

            unsigned int Getcpt() { return cpt; }
            void Setcpt(unsigned int val) { cpt = val; }
            unsigned int Getid() { return id; }
            void Setid(unsigned int val) { id = val; }
            Date Getdate() { return date; }
            void Setdate(Date val) { date = val; }
            float Getmnt() { return mnt; }
            void Setmnt(float val) { mnt = val; }
            int Gettype() { return type; }
            void Settype(int val) { type = val; }
            string getLibelleType()
            {
                return libelleTransaction[type-1];
            }
        protected:

        private:
            unsigned int cpt;
            unsigned int id;
            Date date;
            float mnt;
            int type;
            string libelleTransaction[3] = {"DEPOT", "RETRAIT","VIREMENT"};
    };
}
#endif // TRANSACTION_H
