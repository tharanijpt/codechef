//https://www.codechef.com/problems/FINE
#include <iostream>
using namespace std;

int main() {
	int T,S;
	cin >> T;
while(T--){
    cin >> S;
    if (S<=70)
        cout <<"0" << endl;
    else if (S>70 && S<=100)
        cout <<"500" << endl;
    else 
        cout <<"2000" << endl;
}
	return 0;
}
