//https://www.codechef.com/problems/FLOW016
#include <iostream>
using namespace std;

int main() {
	int T,a,b,i,j;
	cin >> T;

while(T--){
int gcd;

cin >> a >> b;
j=min(a,b);
for (i=1;i<=j;i++){
    if (a%i==0 && b%i==0)
    gcd=i;
    
}
    
long int lcm =  (long int)a/(long int)gcd*b;

    cout << gcd << " " << lcm << endl;
}
	return 0;
}
