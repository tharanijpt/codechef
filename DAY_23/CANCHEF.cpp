//https://www.codechef.com/problems/CANCHEF
#include <iostream>
using namespace std;

int main() {
	int T,petrol,distance;
	cin >> T;
while(T--){
cin >> petrol >> distance;
(petrol*15 >= distance*2)?cout<<"YES"<<endl:cout<<"NO"<<endl;
}
	return 0;
}
