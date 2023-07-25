//https://www.codechef.com/problems/MAXIMUMSUBS
#include <iostream>
using namespace std;

int main() {
int t,x,max;
cin >>t;
while (t--){
    cin >> x;
    max =( x*60 )/30;
    cout << max<< endl;
}
	return 0;
}
