//https://www.codechef.com/problems/CHEFSLP
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int n,l,x,s;
cin >>n>>l>>x;
s = min ((n-l),l);
cout << s*x<< endl;
}
	return 0;
}
