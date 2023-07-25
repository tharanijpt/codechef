//https://www.codechef.com/problems/CMASKS
#include <iostream>
using namespace std;

int main() {
int t,x,y;
cin >> t;
while(t--){
    cin >> x >> y;
	if (x*100 > y*10)
        cout <<"cloth" << endl;
    else if (y*10 > x*100 )
        cout <<"disposable" << endl;
    else 
        cout <<"cloth" << endl;

}
	return 0;
}
