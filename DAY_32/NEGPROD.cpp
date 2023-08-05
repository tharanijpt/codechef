//https://www.codechef.com/problems/NEGPROD
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
    int a, b, c;
    cin >> a >> b >> c;
    if (a*b <0 || b*c<0 || c*a<0)
    cout << "yes"<< endl;
    else 
    cout <<"no" << endl;
    
}
	return 0;
}
