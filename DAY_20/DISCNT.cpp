//https://www.codechef.com/problems/DISCNT
#include <iostream>
using namespace std;

int main() {
	int T,price=100,discount,total=0;
	cin >> T;
while(T--){
    cin  >> discount;
    total = price - discount;
    cout << total << endl;
}
	return 0;
}
