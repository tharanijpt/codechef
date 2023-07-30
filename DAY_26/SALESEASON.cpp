//https://www.codechef.com/problems/SALESEASON
#include <iostream>
using namespace std;

int main() {
	int T,rupees;
	cin >> T;

while(T--){
    cin >> rupees;
    if (rupees <=100)
        cout << rupees - 0 << endl;
    else if (rupees>100 && rupees<=1000)
        cout << rupees - 25  << endl;
    else if (rupees >1000 && rupees<=5000)
        cout << rupees - 100 << endl;
    else 
        cout << rupees - 500<< endl;
    
}
	return 0;
}
