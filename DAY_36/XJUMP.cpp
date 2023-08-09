//https://www.codechef.com/problems/XJUMP
#include <iostream>
using namespace std;
#include <cmath>
int main() {
	int T;
	cin >> T;

while(T--){
int x,y;
cin >> x >> y;
if(x<y)
cout << x << endl;
else 
cout << (x/y) + x%y  << endl;

}
	return 0;
}
