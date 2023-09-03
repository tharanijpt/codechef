//https://www.codechef.com/problems/FLOW009
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
float q,p;
cin >> q >> p;
if (q>1000){
    cout <<fixed<<q*p*0.9 << endl;
}
else 
cout <<fixed<<q*p*1.0 << endl;
}
	return 0;
}
