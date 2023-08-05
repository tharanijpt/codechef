//https://www.codechef.com/problems/MAXTASTE
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int a,b,c,d,max_taste;
cin >> a >> b >> c >> d;
max_taste = max(a,b) + max(c,d);
cout << max_taste << endl;
}	return 0;
}
