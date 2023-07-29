//https://www.codechef.com/problems/WATERCOOLER1
#include <iostream>
using namespace std;

int main() {
	int T,rent,purchace,month;
	cin >> T;

while(T--){
    cin >> rent >> purchace >> month;
    if (rent*month >= purchace)
    cout <<"NO" << endl;
    else 
    cout <<"YES" << endl;
    
}
	return 0;
}
