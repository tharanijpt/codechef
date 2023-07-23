//https://www.codechef.com/problems/KITCHENSPICE
#include <iostream>
using namespace std;

int main() {
	int T,spice_level;
	cin >> T;
while(T--){
    cin >> spice_level;
    if (spice_level<4)
        cout <<"MILD" << endl;
    else if ( spice_level>=4 && spice_level<7)
        cout <<"MEDIUM" << endl;
    else 
        cout <<"HOT" << endl;
}

	return 0;
}
