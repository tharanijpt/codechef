//https://www.codechef.com/problems/BUILDINGRACE
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
double a,b,c,d;
cin >> a >>b >>c >>d;
    if (a/c > b/d)
        cout <<"Chefina" << endl;
    else if (a/c < b/d)
        cout <<"Chef" << endl;
    else 
        cout <<"Both" << endl;

}
	return 0;
}

