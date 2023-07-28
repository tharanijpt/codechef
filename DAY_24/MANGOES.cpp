//https://www.codechef.com/problems/MANGOES
#include <iostream>
using namespace std;

int main() {
	int T,mango,truck,bridge,max;
	cin >> T;

while(T--){
    cin >> mango >> truck >> bridge;
    max  = (bridge - truck )/mango;
    cout << max << endl;
}
	return 0;
}
