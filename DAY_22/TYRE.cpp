//https://www.codechef.com/problems/TYRE
#include <iostream>
using namespace std;

int main() {
	int T,bike,car;
	cin >> T;
while(T--){
    cin >> bike >> car;
    cout << bike*2 + car*4 << endl;
}
	return 0;
}
