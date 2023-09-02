//https://www.codechef.com/problems/VISA
#include <iostream>
using namespace std;

int main() {
	// your code goes here
		int T;
	cin >> T;

while(T--){
int x1,x2,y1,y2,z1,z2;
cin >> x1 >> x2 >> y1 >> y2 >> z1 >> z2;
    if (x2 >= x1 && y2 >= y1 && z2 <=z1)
        cout <<"Yes" << endl;
    else 
        cout <<"No" << endl;
}
	return 0;
}
