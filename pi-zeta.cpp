#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long double sum = 0;

    for(int k = 1; k > 0; k++) {
        sum += 1.00 / pow(k, 2);
        long double ans = sqrt(sum * 6);
        cout << ans << " - " << sum << " - " << k << endl;
    }
}
