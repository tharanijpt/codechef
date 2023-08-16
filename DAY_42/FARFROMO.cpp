//https://www.codechef.com/problems/FARFROMO
#include <iostream>
#include <cmath>
using namespace std;

double dis(int x, int y) {
    double result = sqrt(x*x + y*y);
    return result;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        double alice = dis(a, b);
        double bob = dis(c, d);

        if (alice == bob)
            cout << "EQUAL" << endl;
        else if (alice < bob)
            cout << "BOB" << endl;
        else
            cout << "ALEX" << endl;
    }

    return 0;
}
