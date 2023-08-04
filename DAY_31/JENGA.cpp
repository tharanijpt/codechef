//https://www.codechef.com/problems/JENGA
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
    int x,y;
    cin >> x >>y;
    if ((x<=y)&& (y%x==0))
    cout <<"yes" << endl;
    else 
    cout <<"no" << endl;
}
	return 0;
}
