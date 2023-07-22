//https://www.codechef.com/problems/APPLORNG
#include <iostream>
using namespace std;

int main() {
	int money,cost_apple,cost_orange;
    cin >> money;
    cin >> cost_apple >> cost_orange;
    (cost_orange+cost_apple<=money)?cout<<"YES"<<endl:cout<<"NO"<<endl;
	return 0;
}
