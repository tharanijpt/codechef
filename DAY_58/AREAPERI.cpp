//https://www.codechef.com/problems/AREAPERI
#include <iostream>
using namespace std;

int main() {
int l,b;
cin >> l >> b ;
int area = l*b ;
int peri = 2*(l+b);

if (area > peri){
    cout <<"Area" << endl;
    cout <<area<< endl;
}
else if (area < peri){
    cout << "Peri" << endl << peri;}
else {
    cout <<"Eq" << endl << area;
    
}
	return 0;
}
