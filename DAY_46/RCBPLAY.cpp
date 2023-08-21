//https://www.codechef.com/problems/RCBPLAY
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int point,need,match;
cin >> point >> need >> match;
(point+match*2>=need) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
}
	return 0;
}
