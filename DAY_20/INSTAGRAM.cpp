//https://www.codechef.com/problems/INSTAGRAM
#include <iostream>
using namespace std;

int main() {
	int T,following,follower;
	cin >> T;
while(T--){
    cin >> following >> follower;
    (following>follower*10)?cout<<"YES"<<endl:cout<<"NO"<<endl;
}
	return 0;
}

