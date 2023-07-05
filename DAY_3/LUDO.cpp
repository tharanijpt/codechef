//https://www.codechef.com/problems/LUDO
#include <iostream>
using namespace std;

int main() {
	int T,dice;
	cin >> T;
	while(T--){
	    cin>>dice;
	    (dice==6)?cout<<"YES"<<endl : cout<<"NO"<<endl;
	}
	return 0;
}
