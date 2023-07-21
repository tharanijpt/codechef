//https://www.codechef.com/problems/M1ENROL
#include <iostream>
using namespace std;

int main() {
	int T,seat,student;
	cin >> T;
while(T--){
    cin >> seat >> student;
    if (seat>=student)
        cout << "0"<< endl;
    else 
        cout << student- seat<< endl;
}
	return 0;
}
