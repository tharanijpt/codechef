//https://www.codechef.com/problems/FLOORS
#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int chefroom, chefinaroom;
        cin >> chefroom >> chefinaroom;

        int cheffloor = (chefroom + 9) / 10;
        int chefinafloor = (chefinaroom + 9) / 10;

        cout << abs(cheffloor - chefinafloor) << endl;
    }

    return 0;
}
