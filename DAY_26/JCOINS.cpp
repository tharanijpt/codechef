//https://www.codechef.com/problems/JCOINS
#include <iostream>
using namespace std;

int main() {
	int T,bill,coin;
	cin >> T;

while(T--){
    cin >> bill >> coin;
    cout << bill * 10 + coin*5  << endl;
}
	return 0;
}
