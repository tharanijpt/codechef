//https://www.codechef.com/problems/MVR
#include <iostream>
using namespace std;

int main() {
	int mgoal,massist,rgoal,rassist;

    cin >> mgoal>> massist >> rgoal>> rassist;
    int m = mgoal*2 + massist;
    int r = rgoal*2 + rassist;
if (m>r)
    cout <<"Messi" << endl;
else if (r>m)
    cout <<"Ronaldo" << endl;
else 
    cout <<"Equal" << endl;
	return 0;
}
