#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int num) {
    int root = (int) sqrt(num) + 1;

    if(num <= 1)
        return false;

    for(int i = 2; i < root; i++) {
        if(num % i == 0)
            return false;
    }

    return true;
}

int main() {
    double sum = 0,
        pro = 1;

    int s = 3;

    for(int n = 1; n < 100; n++) {
        sum += 1.00 / pow(n, s);

        if(isPrime(n) == true)
            pro *= 1.00 / (1.00 - (1.00 / pow(n, s)));

        cout << "{sum} " << sum << endl;
        cout << "{pro} " << pro << endl;
    }
}
