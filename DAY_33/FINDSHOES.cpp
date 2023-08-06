//https://www.codechef.com/problems/FINDSHOES
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int n,m,need;
cin >> n >>m;
    need=n*2;
    if (n<m)
    cout << n << endl;
    else 
    cout << need - m<< endl;
    
}
return 0;
}
