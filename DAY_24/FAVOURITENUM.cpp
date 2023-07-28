//https://www.codechef.com/problems/FAVOURITENUM
#include <iostream>
using namespace std;

int main() {
    int t,num;
    cin >> t;
    
while(t--){
    cin >> num ;
    if (num%2==0 && num%7==0)
        cout <<"alice" << endl;
	else if (num%2!=0 && num%9==0)
	    cout << "bob"<< endl;
    else
        cout << "charlie"<< endl;
}
	return 0;
}
