//https://www.codechef.com/problems/TABLETS
#include <iostream>
using namespace std;

int main() {
	int T,days,tablets;
	cin >> T;
while(T--){
    cin >> days >> tablets;
    (days*3<=tablets)?cout<<"YES"<<endl:cout<<"NO"<<endl;
}
	return 0;
}
