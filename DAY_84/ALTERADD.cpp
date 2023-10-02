//https://www.codechef.com/problems/ALTERADD
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int a,b,c;
cin >> a >> b;
c = b-a;
(c%3!=2) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
}
	return 0;
}
