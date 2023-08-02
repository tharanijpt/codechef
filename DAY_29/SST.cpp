//https://www.codechef.com/problems/SST
#include <iostream>
using namespace std;

int main() {
	int T,x,y,first,second;
	cin >> T;

while(T--){
    cin  >> x >> y;
    first = x/0.1;
    second = y/0.2;
    if (first > second)
        cout <<"first" << endl;
    else if ( first < second)
        cout <<"second" << endl;
    else 
        cout <<"any" << endl;

    
    
}
	return 0;
}
