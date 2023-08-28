//https://www.codechef.com/problems/EITA
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int d,x,y,z;
cin >> d >> x >> y >> z;
int m1 = 7*x;
int m2 = d*y + (7-d)*z;
cout << max(m1,m2)<< endl;

}

	return 0;
}
