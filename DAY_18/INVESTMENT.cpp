//https://www.codechef.com/problems/INVESTMENT
#include <iostream>
using namespace std;

int main() {
	int T,invest, inflation ;
	cin >> T;
while(T--){
    cin >> invest >> inflation;
    (invest>=inflation*2)?cout<<"YES"<<endl:cout<<"NO"<<endl;
}
}
