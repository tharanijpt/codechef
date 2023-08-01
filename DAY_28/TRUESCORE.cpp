//https://www.codechef.com/problems/TRUESCORE
#include <iostream>
using namespace std;

int main() {
int t,a,b,c,d;
cin >> t;
while(t--){
    cin >> a >>b >> c>>d ;
    if (c>=a && d>=b)
        cout << "POSSIBLE"<< endl;
    else 
        cout << "IMPOSSIBLE"<< endl;
    
}
	return 0;
}

