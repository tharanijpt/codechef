https://www.codechef.com/problems/CANDYDIST
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int x,y;
cin >> x >>y;
if ((x/y)%2==0 && x%y==0){
    cout <<"yes" << endl;
}
else 
cout <<"no" << endl;
}
	return 0;
}
