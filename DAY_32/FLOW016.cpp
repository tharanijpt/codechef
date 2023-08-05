//https://www.codechef.com/problems/FLOW016
#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
	int T,a,b;
	cin >> T;

while(T--){
cin >> a >> b;
    cout << __gcd(a,b) << " " << lcm(a,b) << endl;
}
	return 0;
}
