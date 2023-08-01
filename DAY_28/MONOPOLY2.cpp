//https://www.codechef.com/problems/MONOPOLY2
#include <iostream>
using namespace std;

int main() {
	int T,a,b,c,d;
	cin >> T;

while(T--){
    cin >> a >>b >>c >>d;
    if (a+b+c < d || b+c+d < a || a+b+d < c || a+c+d < b )
        cout <<"YES" << endl;

    else 
        cout <<"NO" << endl;

}
	return 0;
}
