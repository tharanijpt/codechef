//https://www.codechef.com/problems/PILBELLS
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int n,x,k,p;
cin >> n >> x >> k >>p;

if (k<=x)
    cout <<(p+(k*10)) << endl;
else if (k>x && k<n)
    cout <<p+(x*10)+(k-x)*5 << endl;
else if (k==n)
    cout <<p+(x*10)+(k-x)*5 + 20<< endl;
}
	return 0;
}

