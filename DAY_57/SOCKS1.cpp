//https://www.codechef.com/problems/SOCKS1
#include <iostream>
using namespace std;

int main() {
int a,b,c;
cin >> a >>b >>c;
if (a==b || a ==c)
    cout <<"YES" << endl;
else if (b==c)
    cout <<"YES" << endl;
else 
    cout <<"NO" << endl;
	return 0;
}
