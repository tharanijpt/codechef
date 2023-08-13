//https://www.codechef.com/problems/SPEEDTEST
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
    
double alice_dis,alice_time,bob_dis,bob_time;
cin >> alice_dis >> alice_time >> bob_dis >> bob_time;

double alice = alice_dis / (alice_time*60);
double bob = bob_dis / (bob_time*60);

    if (alice == bob )
        cout <<"equal" << endl;
    else if ( bob > alice )
        cout <<"bob" << endl;
    else 
        cout <<"alice" << endl;

}
	return 0;
}
