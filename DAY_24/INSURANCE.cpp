//https://www.codechef.com/problems/INSURANCE
#include <iostream>
using namespace std;

int main() {
	int T,x,y;
	cin >> T;
while(T--){
    cin >> x >> y;
    if (y<x)
    cout << y<< endl;
    else 
    cout << x<< endl;
}
	return 0;
}
