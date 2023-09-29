//https://www.codechef.com/problems/PRODUCT
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int b, c, g;
        cin >> b >> c;
        g = __gcd(b, c);
        if (g == 1)
            cout << c << endl;
        else
            cout << c / g << endl;
    }
    return 0;
}
