//https://www.codechef.com/problems/ACCURACY
#include <iostream>
using namespace std;

int main() {
	int T,mark;
	cin >> T;

while(T--){
    cin >> mark;
    if (mark%3==0)
        cout << 0 << endl;
    else
        cout << 3 - (mark%3) << endl;
    
}
	return 0;
}
