//https://www.codechef.com/problems/BATTERYLOW
#include <iostream>
using namespace std;

int main() {
	int T,battery;
	cin >> T;
while(T--){
    cin >> battery;
    (battery<=15)?cout<<"YES"<<endl:cout<<"NO"<<endl;
}
	return 0;
}
