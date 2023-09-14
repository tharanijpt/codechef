//https://www.codechef.com/problems/SURPLUS
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int a1,a2,b1,b2;
cin  >> a1 >> a2 >> b1 >>b2;
int trade =a1-a2  + b1-b2;
(trade<0) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
}
	return 0;
}
