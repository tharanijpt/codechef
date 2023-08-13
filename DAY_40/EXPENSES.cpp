//https://www.codechef.com/problems/EXPENSES
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int expense, income, final_income, total;
        cin >> expense >> income;
        final_income = pow(2, income);
        total = final_income;

        for (int i = 1; i <= expense; i++) { 
            total -= total * 0.5;
        }

        cout << total << endl;
    }

    return 0;
}
