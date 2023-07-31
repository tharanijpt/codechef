//https://www.codechef.com/problems/HELIUM3
#include <iostream>
using namespace std;

int main() {
int moon_resource, power, need_power, years,t;
cin >> t;
while(t--){
    cin >> need_power >> years >> moon_resource >> power;
    (moon_resource*power >= need_power * years) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    
}
	return 0;
}
