//https://www.codechef.com/problems/SEATNUMBER
#include <iostream>
using namespace std;

int main() {
	int T,seat;
	cin >> T;

while(T--){
    cin >> seat;
    if (seat <=10)
    cout <<"lower double" << endl;
    else if (seat<=15)
    cout << "lower single" << endl;
    else if (seat <=25)
    cout <<"upper double" << endl;
    else  
    cout << "upper single" << endl;
}
	return 0;
}
