//https://www.codechef.com/problems/CYCLICQD
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int a,b,c,d;
cin >> a >> b >> c >> d;
if (a+c ==180 && b+d ==180)
cout << "yes"<< endl;
else
cout <<"no" << endl;
}
	return 0;
}
