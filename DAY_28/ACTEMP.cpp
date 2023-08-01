//https://www.codechef.com/problems/ACTEMP
#include <iostream>
using namespace std;

int main() {
	int T,a,b,c;
	cin >> T;

while(T--){
    cin >> a >> b >>c;
    (b>=a && b>=c) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
}
	return 0;
}
