//https://www.codechef.com/problems/CHEAPFOOD
#include <iostream>
using namespace std;

int main() {
	int T,bill,Percent,discount;
	cin >> T;

while(T--){
    cin >> bill;
    Percent = bill * 0.1;
    discount = 100 ;
    
    if (Percent >= discount){
        cout << Percent << endl;
    }
    else
        cout << discount<< endl;
}    
	return 0;
}
