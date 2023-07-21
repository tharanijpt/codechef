//https://www.codechef.com/problems/FAIRPASS
#include <iostream>
using namespace std;

int main() {
	int T,N,K;
	cin >> T;
while(T--){
    cin >> N >> K;
    (N+1<=K)?cout<<"YES"<<endl:cout<<"NO"<<endl;
}
	return 0;
}
