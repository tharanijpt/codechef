//https://www.codechef.com/problems/CARRYGOLD
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int n,x,y;
cin >> n >> x >> y;
int carry = (n+1)*y;
(carry>=x) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
}
	return 0;
}
