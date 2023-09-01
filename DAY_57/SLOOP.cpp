//https://www.codechef.com/problems/SLOOP
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int m,s;
cin >> m  >> s;
if (s>m)
    cout <<0<< endl;
else {
    cout <<m/s << endl;
}
}
	return 0;
}
