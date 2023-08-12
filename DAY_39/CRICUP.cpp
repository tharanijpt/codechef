//https://www.codechef.com/problems/CRICUP
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int team1,team2,diff;
cin >> team1 >> team2 >> diff;
if (abs(team1-team2)<=diff)
cout << "yes"<< endl;
else 
cout <<"no" << endl;
}
	return 0;
}
