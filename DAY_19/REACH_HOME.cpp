//https://www.codechef.com/problems/REACH_HOME
#include <iostream>
using namespace std;

int main() {
	int T,litres,distance;
	cin >> T;
while(T--){
    cin >> litres >> distance;
    (litres*5 >=distance)?cout<<"YES"<<endl:cout<<"NO"<<endl;
}
	return 0;
}
