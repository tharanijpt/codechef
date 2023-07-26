//https://www.codechef.com/problems/BROKENPHONE
#include <iostream>
using namespace std;

int main() {
	int T,x,y;
	cin >> T;
while(T--){
    cin >> x >>y;
    	 if (x==y)
        cout <<"any" << endl;
    else if ( x>y)
        cout <<"new phone" << endl;
    else 
        cout <<"repair" << endl;

}
	return 0;
}
