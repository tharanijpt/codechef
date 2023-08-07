//https://www.codechef.com/problems/C_RATING

#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int current_rating, desires,required;
cin >> current_rating >>desires;
required = desires - current_rating ;
if (desires <= current_rating ){
    cout << 0 << endl;}
else if (required % 8 !=0 )
    cout <<required/8 + 1<< endl;
else
    cout << required/8<< endl;
 
}
	return 0;
}

