//https://www.codechef.com/problems/LOOP
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int i,d,n;
cin >> i >> d >>n;
int final =min(abs(n-abs(i-d)),abs(i-d));
cout << final << endl;
}
	return 0;
}
