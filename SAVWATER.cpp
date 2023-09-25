//https://www.codechef.com/problems/SAVWATER
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int h,x,y,c,n;
cin >> h >> x >> y >> c;
n = y/2 + x;
(h*n<=c)? cout<<"YES"<<endl : cout<<"NO"<<endl;
}
	return 0;
}
