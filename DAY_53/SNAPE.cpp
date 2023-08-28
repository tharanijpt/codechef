//https://www.codechef.com/problems/SNAPE
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
float b,ls;
cin >> b >>ls;
cout <<sqrt(ls*ls - b*b) << " " << sqrt(ls*ls + b*b)<<endl;
}
	return 0;
}
