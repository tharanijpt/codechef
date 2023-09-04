//https://www.codechef.com/problems/CCISLAND
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
float x,y,xr,yr,d;
cin >> x >>y >>xr >>yr >>d;
int live = min (x/xr , y/yr);
(live>=d) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
}
	return 0;
}
