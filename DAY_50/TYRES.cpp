//https://www.codechef.com/problems/TYRES
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int tire;
cin >> tire;
if (tire>=0 && tire%4!=0){
    cout <<"YES"<< endl;
}
else 
cout <<"NO" << endl;
}
	return 0;
}
