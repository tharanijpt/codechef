//https://www.codechef.com/problems/DISCUS
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
    int x,y,z;
    cin >> x >>y >>z;
    cout <<max(x,max(y,z)) << endl;
}
	return 0;
}
