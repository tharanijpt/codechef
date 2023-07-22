//https://www.codechef.com/problems/LTIME
#include <iostream>
using namespace std;

int main() {
	int T,time;
	cin >> T;
while(T--){
    cin >> time ;
    (time >= 1 && time <=4)?cout<<"YES"<<endl:cout<<"NO"<<endl;
}
	return 0;
}
