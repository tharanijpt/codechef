//https://www.codechef.com/problems/DOREWARD
#include <iostream>
using namespace std;

int main() {
    int T,dontions;
    cin >> T;

while(T--){
    cin >> dontions;
    if (dontions<=3)
        cout <<"BRONZE" << endl;
    else if (dontions>3 && dontions<=6 )
        cout <<"SILVER" << endl;
    else 
        cout <<"GOLD" << endl;
}
	return 0;
}
