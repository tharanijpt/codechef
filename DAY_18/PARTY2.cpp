//https://www.codechef.com/problems/PARTY2
#include <iostream>
using namespace std;

int main() {
	int T,num,friends,money;
	cin >> T;
while(T--){
    cin >> num >> friends >> money;
    (num * friends<= money)?cout<<"YES"<<endl:cout<<"NO"<<endl;
}
	return 0;
}
