//https://www.codechef.com/problems/VOLCONTROL
#include <iostream>
using namespace std;

int main() {
	int T,current_volume,changed_volume;
	cin >> T;
while(T--){
    cin >> current_volume >> changed_volume;
    if (current_volume>changed_volume)
    cout << current_volume - changed_volume<< endl;
    else
    cout << changed_volume - current_volume << endl;
    
}
	return 0;
}

