//https://www.codechef.com/problems/LAZYCHF
#include <iostream>
#include<cmath>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int x,m,d;
cin >> x >> m >>d;
cout << min(m*x,x+d) << endl;
}
	return 0;
}
