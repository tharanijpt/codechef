//https://www.codechef.com/problems/CREDITS
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int credits;
cin >> credits;
    if (credits>65)
        cout <<"Overload" << endl;
    else if (credits<35)
        cout <<"Underload" << endl;
    else 
        cout <<"Normal" << endl;

}
	return 0;
}
