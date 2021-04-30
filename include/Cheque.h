#ifndef CHEQUE_H
#define CHEQUE_H
#include <string>
#include <Compte.h>
using namespace std;
namespace model{
    class Cheque : public Compte
    {
        public:
            Cheque();
            Cheque(string num, float solde, float interet);
            virtual ~Cheque();

            float Getinteret() { return interet; }
            void Setinteret(float val) { interet = val; }

        protected:

        private:
            float interet;
    };
}
#endif // CHEQUE_H
