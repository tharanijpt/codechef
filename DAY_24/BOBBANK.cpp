//https://www.codechef.com/problems/BOBBANK
#include <iostream>
using namespace std;

int main() {
	int T,currentBalance,income,months,maintenance,finalBalance;
	cin >> T;
	
while(T--){
    cin >> currentBalance >> income >> maintenance >> months ;
    finalBalance = currentBalance + (income - maintenance)*months;
    cout << finalBalance << endl;
}
	return 0;
}
