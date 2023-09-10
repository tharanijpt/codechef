//https://www.codechef.com/problems/OLYRANK
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int a,b,c,x,y,z;
cin >> a >> b >> c >> x >> y>>z;
int c1 = a+b+c;
int c2 =x+y+z;
(c1>c2) ? cout<<"1"<<endl : cout<<"2"<<endl;
}
	return 0;
}
