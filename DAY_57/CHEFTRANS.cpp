//https://www.codechef.com/problems/CHEFTRANS
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int a,b,c;
cin >> a >> b >>c;
if (a+b == c ){
    cout <<"EQUAL"<< endl;
}
else
    cout <<(a+b < c ? "PLANEBUS" : "TRAIN") << endl;
}
	return 0;
}
