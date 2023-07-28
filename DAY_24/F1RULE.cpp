//https://www.codechef.com/problems/F1RULE
#include <iostream>
using namespace std;

int main() {
	int T,recorded_timing, chef_timing;
	cin >> T;

while(T--){
    cin >> recorded_timing >> chef_timing;
    (recorded_timing * 1.07 >= chef_timing) ? cout<<"YES"<<endl : cout<<"NO"<<endl;

}
	return 0;
}
