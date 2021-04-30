#include <iostream>
#include "Date.h"
using namespace std;
using namespace utils;
int main()
{
    Date * d = new Date();
    cout << d->now()->toString() << endl;
    return 0;
}
