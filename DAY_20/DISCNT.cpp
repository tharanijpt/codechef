//https://www.codechef.com/problems/DISCNT
#include <iostream>
using namespace std;

int main() {
	int T,price,discount,total;
	cin >> T;
while(T--){
    cin >> price >> discount;
    total =price - discount;
    cout <<total << endl;
}
	return 0;
}
