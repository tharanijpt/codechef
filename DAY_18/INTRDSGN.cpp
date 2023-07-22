//https://www.codechef.com/problems/INTRDSGN
#include <iostream>
using namespace std;

int main() {
	int T,X1,Y1,X2,Y2;
	int interiorone,interiortwo;
	cin >> T;
while(T--){
    cin>> X1>>Y1>>X2>>Y2;
    interiorone=X1+Y1;
    interiortwo=X2+Y2;
if (interiorone<interiortwo)
    cout << interiorone<< endl;
else
    cout << interiortwo<< endl;
    
}
	return 0;
}
