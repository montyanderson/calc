#include <iostream>
#include "decimal.h"

using namespace std;
using namespace dec;

#define P 18

int main() {
    decimal<P> a(1);

    for(int i = 1; i < 10; i++) {
        a = (a / decimal_cast<P>(2.00)) + (decimal_cast<P>(1.00))  / a;
        cout << a << endl;
    }
}
