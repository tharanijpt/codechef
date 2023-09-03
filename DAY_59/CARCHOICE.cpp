//https://www.codechef.com/problems/CARCHOICE
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
float x,x1,y,y1;
cin >> x >> x1 >> y >> y1;
    if (y/x == y1/x1)
        cout <<"0" << endl;
    else if (y/x > y1/x1 )
        cout <<"1" << endl;
    else 
        cout <<"-1" << endl;


}
	return 0;
}
