//https://www.codechef.com/problems/FOODPLAN
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int n,m;
cin >> n >> m;
    if (n-(0.1*n)>m)
        cout <<"DINING" << endl;
    else if ( n-(n*0.1)<m)
        cout <<"ONLINE" << endl;
    else 
        cout <<"EITHER" << endl;

}
	return 0;
}
