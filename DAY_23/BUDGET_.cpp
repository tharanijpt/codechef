//https://www.codechef.com/problems/BUDGET_
#include <iostream>
using namespace std;

int main() {
	int T,total,daily;
	cin >> T;
while(T--){
cin >> total >> daily;
(daily*30<=total)?cout<<"YES"<<endl:cout<<"NO"<<endl;
}
	return 0;
}
