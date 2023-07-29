//https://www.codechef.com/problems/ODDSUMPAIR
#include <iostream>
using namespace std;

int main() {
	int T,a,b,c;
	cin >> T;

while(T--){
    cin >> a >>b >>c;
    if ( (a+b) %2 != 0 || (a + c)%2 != 0 || (c + b)%2 != 0)
    cout << "YES"<< endl;
    else 
    cout <<"NO" << endl;
}
	return 0;
}
