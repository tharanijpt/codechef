//https://www.codechef.com/problems/HARDBET
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int a,b,c;
cin >> a >> b >> c;
int minimum = min(a,min(b,c));
    if (a==minimum)
        cout <<"Draw" << endl;
    else if (b==minimum )
        cout <<"Bob" << endl;
    else 
        cout <<"Alice" << endl;

}

	return 0;
}
