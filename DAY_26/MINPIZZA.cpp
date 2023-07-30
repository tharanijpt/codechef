//https://www.codechef.com/problems/MINPIZZA
#include <iostream>
using namespace std;

int main() {
	int T,friends,slice,required;
	cin >> T;

while(T--){
    cin >> friends >> slice;
    required = friends * slice;
    if (required/4 * 4  >= required  )
        cout << required/4 << endl;    
    else 
        cout << required/4 + 1 << endl;
}
	return 0;
}
