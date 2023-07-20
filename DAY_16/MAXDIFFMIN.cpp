//https://www.codechef.com/problems/MAXDIFFMIN
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T, A, B, C;
    cin >> T;
    while (T--) {
        cin >> A >> B >> C;
        cout << (max({A, B, C}) - min({A, B, C})) << endl;
    }
    return 0;
}
