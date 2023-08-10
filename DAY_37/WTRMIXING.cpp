//https://www.codechef.com/problems/WTRMIXING
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
    int intial, need, hot, cold;
    cin >> intial >> need >> hot >> cold;
    if (intial==need){
        cout <<"YES" << endl;
    }
    else if (intial < need && intial + hot >= need){
            cout <<"YES" << endl;
    }
    else if (intial > need && intial - cold <= need){
            cout << "YES" << endl;
    }
    else 
    {cout <<"NO" << endl;}
    }
	return 0;
}
