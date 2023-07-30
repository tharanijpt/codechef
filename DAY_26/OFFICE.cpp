//https://www.codechef.com/problems/OFFICE
#include <iostream>
using namespace std;

int main() {
	int T,working_hour,friday_hour;
	cin >> T;

while(T--){
    cin >> working_hour >> friday_hour;
    cout << working_hour*4 + friday_hour<< endl;
}
	return 0;
}
