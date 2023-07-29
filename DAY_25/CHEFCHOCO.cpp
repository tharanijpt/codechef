//https://www.codechef.com/problems/CHEFCHOCO
#include <iostream>
using namespace std;

int main() {
	int T,gift,chocolates,rupees;
	cin >> T;

while(T--){
    cin >> gift>> chocolates >> rupees;
    cout << (gift - chocolates ) * rupees << endl;
}
	return 0;
}
