//https://www.codechef.com/problems/DICEGAME2
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int a1,a2,a3,b1,b2,b3;
cin >> a1>> a2>> a3 >>b1 >> b2 >> b3;
int amax = max(a1+a2,max(a2+a3,a1+a3));
int bmax = max(b1+b2,max(b2+b3,b1+b3));
    if (amax==bmax)
        cout <<"Tie" << endl;
    else if ( amax>bmax)
        cout <<"Alice" << endl;
    else 
        cout <<"Bob" << endl;
   
}
	return 0;
}
