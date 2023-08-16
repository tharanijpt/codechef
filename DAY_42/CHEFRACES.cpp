//https://www.codechef.com/problems/CHEFRACES
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int a,b,c,d;
cin >> a >>b >>c >>d;
if (a!=c && a!=d && b!=c && b!=d)
cout <<2<< endl;
else if (a!=c && a!=d || b!=c && b!=d)
cout <<1<<endl;
else 
cout <<0<< endl;
}


	return 0;
}
