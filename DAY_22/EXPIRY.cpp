//https://www.codechef.com/problems/EXPIRY
#include <iostream>
using namespace std;

int main() {
int t,n,k,m;
cin >> t;
while(t--){
    cin >> n >> k >>m;
    (n<=k*m)?cout<<"YES"<<endl:cout<<"NO"<<endl;
}
	return 0;
}
