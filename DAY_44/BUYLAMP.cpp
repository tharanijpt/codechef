//https://www.codechef.com/problems/BUYLAMP
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int a,b,x,y;
cin >> a>>b>>x>>y;
cout <<(b*x) + ((a-b)*min(x,y)) << endl;
}
	return 0;
}
