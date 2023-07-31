//https://www.codechef.com/problems/TESTAVG
#include <iostream>
using namespace std;

int main() {
    float a,b,c,T;
	cin >> T;

while(T--){
    cin >> a >> b >>c ;
    if ((a+b)/2 >= 35 &&  (a+c)/2 >= 35 && (b+c)/2 >= 35 ){ 
        cout << "pass"<< endl;}
    else 
        {cout << "fail"<< endl;}
    
}

	return 0;
}
