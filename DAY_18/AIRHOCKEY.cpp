//https://www.codechef.com/problems/AIRHOCKEY
#include <iostream>
using namespace std;

int main() {
	int T,alice,bob;
	cin >> T;
while(T--){
    cin >> alice>>bob;
    if (alice>bob)
    cout << 7-alice<< endl;
    else 
    cout << 7- bob<< endl;
}
	return 0;
}
