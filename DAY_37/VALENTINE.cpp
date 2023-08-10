//https://www.codechef.com/problems/VALENTINE
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
    int x,y;
    cin >> x >>y;
    if (y<=x){
        cout <<x/y << endl;
    }
    else 
    cout << 0 << endl;
}
	return 0;
}
