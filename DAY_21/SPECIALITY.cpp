//https://www.codechef.com/problems/SPECIALITY
#include <iostream>
using namespace std;

int main() {
int t,x,y,z;
cin  >>t;
while(t--){
    cin >> x >> y >>z ;
	if (x > y && x > z)
        cout <<"setter" << endl;
    else if (y>x && y>z)
        cout <<"tester" << endl;
    else 
        cout <<"editorialist" << endl;

}
	return 0;
}
