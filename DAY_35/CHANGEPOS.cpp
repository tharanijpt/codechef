//https://www.codechef.com/problems/CHANGEPOS
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int a,b,c,d;
cin >> a >> b >> c >> d;
if (a!=c && b!=d){
    cout << 1<< endl;
}
else 
    cout << 2 << endl;
}
	return 0;
}
