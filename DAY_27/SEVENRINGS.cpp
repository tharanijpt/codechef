//https://www.codechef.com/problems/SEVENRINGS
#include <iostream>
using namespace std;

int main() {
	int T,a,b,bill;
	cin >> T;

while(T--){
    
    cin >> a >> b;
    bill = a*b;
    (bill <=99999 && bill >=10000) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    
}
	return 0;
}
