//https://www.codechef.com/problems/CARTRIP
#include <iostream>
using namespace std;

int main() {
	int T,hours;
	cin >> T;
while(T--){
    cin >> hours;
if (hours<= 300)
    cout <<"3000" << endl;
else
    cout << hours*10<< endl;
}
	return 0;
}
