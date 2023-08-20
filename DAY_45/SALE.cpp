//https://www.codechef.com/problems/SALE
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int a,b,c;
cin >> a >>b >>c;

cout <<(a+b+c)- min(min(a,b),c) << endl;
}
	return 0;
}
