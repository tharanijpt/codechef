//https://www.codechef.com/problems/PERFECTTRIO
#include <iostream>
using namespace std;

int main() {
int t,a,b,c;
cin >>t;
while(t--){
    cin >>a>>b>>c;
    (a+b==c||b+c==a||a+c==b)?cout<<"YES"<<endl:cout<<"NO"<<endl;
}
	return 0;
}


