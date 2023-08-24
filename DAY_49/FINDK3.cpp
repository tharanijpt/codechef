//https://www.codechef.com/problems/FINDK3
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int x,y,z,a,b;
cin >> x >> y >>z;
if ((x*y)%z==0){
    a=x*y;
    b=z;
    cout <<a<<" "<<b<< endl;}
else if ((z*y)%x==0){
    a=z*y;
    b=x;
    cout <<a<<" "<<b<< endl;}
else if ((x*z)%y==0){
    a=x*z;
    b=y;
    cout <<a<<" "<<b<< endl;}
else
    cout <<-1<< endl;

}
	return 0;
}
