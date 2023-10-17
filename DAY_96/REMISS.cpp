//https://www.codechef.com/problems/REMISS
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int a,b;
cin >>a>>b;
cout <<max(a,b)<<" "<<max(a,max(b,a+b)) << endl;
}
	return 0;
}
