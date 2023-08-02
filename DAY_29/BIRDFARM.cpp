//https://www.codechef.com/problems/BIRDFARM
#include <iostream>
using namespace std;

int main() {
	int T,x,y,z;
	cin >> T;

while(T--){
    cin >> x >> y >> z;
    if (x==y && z%x==0)
    cout << "any" << endl;
    else if (z % x == 0)
    cout <<"chicken" << endl;
    else if (z % y ==0)
    cout <<"duck" << endl;
    else 
    cout <<"none" << endl;
}
	return 0;
}
