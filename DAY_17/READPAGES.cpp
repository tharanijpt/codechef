//https://www.codechef.com/problems/READPAGES
#include <iostream>
using namespace std;

int main() {
	int T,N,X,Y;
	cin >> T;
while(T--){
    cin >> N >> X >> Y;
    (N<=X*Y)?cout<<"YES"<<endl:cout<<"NO"<<endl;
}
	return 0;
}
