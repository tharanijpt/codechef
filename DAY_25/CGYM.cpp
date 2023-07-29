//https://www.codechef.com/problems/CGYM
#include <iostream>
using namespace std;

int main() {
	int T,gym,personal_trainer,budget;
	cin >> T;

while(T--){
    cin >> gym >> personal_trainer >> budget;
    if (gym + personal_trainer <= budget)
        cout << "2"<< endl;
    else if (gym <= budget)
        cout <<"1" << endl;
    else 
        cout << "0"<< endl;
}
	return 0;
}
