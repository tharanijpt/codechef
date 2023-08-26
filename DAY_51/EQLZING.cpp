//https://www.codechef.com/problems/EQLZING
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int a,b;
cin >> a >>b;
if((a%2==0 && b%2!=0) || (a%2!=0 && b%2==0))
cout <<"No"<< endl;
else
cout <<"Yes" << endl;
}
	return 0;
}
