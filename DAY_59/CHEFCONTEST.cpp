//https://www.codechef.com/problems/CHEFCONTEST
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int ch,cf,m1,m2;
cin >> ch >> cf >> m1 >> m2;
    if (ch + m1*10 == cf + m2*10)
        cout <<"Draw" << endl;
    else if (ch + m1*10 > cf + m2*10 )
        cout <<"Chefina" << endl;
    else 
        cout <<"Chef" << endl;

}
	return 0;
}
