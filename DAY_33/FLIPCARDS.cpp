//https://www.codechef.com/problems/FLIPCARDS
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
    int a,b,x;
    cin >> a >>b;
    x=a-b;
    if (x<b)
    cout << x << endl;
    else 
    cout <<b << endl;
    
}
	return 0;
}
