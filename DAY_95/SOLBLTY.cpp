//https://www.codechef.com/problems/SOLBLTY
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int x,a,b,final;
cin >>x>>a>>b;
final = (a+(100-x)*b)*10;
cout << final<< endl;
}
	return 0;
}
