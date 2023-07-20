https://www.codechef.com/problems/RAINFALL1
#include <iostream>
using namespace std;

int main() {
	int T,rainfall;
	cin >> T;
while(T--){
    cin >> rainfall;
    if (rainfall<3)
        cout <<"LIGHT" << endl;
    else if (rainfall >= 3 && rainfall < 7 )
        cout <<"MODERATE" << endl;
    else 
    cout <<"HEAVY" << endl;
}
	return 0;
}
