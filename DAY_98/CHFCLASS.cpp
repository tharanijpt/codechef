//https://www.codechef.com/problems/CHFCLASS
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;

while(T--){
int a;
cin >>a;
if (a%7>=6)
    cout << a/7 + 1 << endl;
else 
    cout << a/7 << endl;
}
	return 0;
}
