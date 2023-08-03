//https://www.codechef.com/problems/NIBBLE
#include <iostream>
using namespace std;

int main() {
	int T,bit;
	cin >> T;

while(T--){
    cin >> bit;
    if (bit%4==0)
    cout <<"good" << endl;
    else 
    cout << "not good"<< endl;
    
}
	return 0;
}
