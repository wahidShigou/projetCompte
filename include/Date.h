#ifndef DATE_H
#define DATE_H
#include <string>

using namespace std;
namespace utils{
    class Date
    {
        public:
            Date();
            virtual ~Date();

            unsigned int Getjour() { return jj; }
            void Setjour(unsigned int val) { jj = val; }
            unsigned int Getmois() { return mm; }
            void Setmois(unsigned int val) { mm = val; }
            unsigned int Getannee() { return aa; }
            void Setannee(unsigned int val) { aa = val; }

            int compare(Date *dateDebut);
            Date * now();
            string toString();
        protected:

        private:
            unsigned int jj;
            unsigned int mm;
            unsigned int aa;

    };
}
#endif // DATE_H
