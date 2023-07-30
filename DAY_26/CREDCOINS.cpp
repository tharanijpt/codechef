//https://www.codechef.com/problems/CREDCOINS
#include <iostream>
using namespace std;

int main() {
	int T,bills,coins,final_coins;
	cin >> T;

while(T--){
    cin >> bills >> coins;
    final_coins = bills * coins ;
    cout << final_coins/100<< endl;
}
	return 0;
}

