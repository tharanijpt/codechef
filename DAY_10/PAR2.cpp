
//https://www.codechef.com/problems/PAR2
#include <iostream>
using namespace std;

int main() {
    int T,chocolate;
    cin >> T;
while(T--){
    cin>>chocolate;
    (chocolate%2==0)?cout<<"YES"<<endl : cout<<"NO"<<endl;
}
	return 0;
}
