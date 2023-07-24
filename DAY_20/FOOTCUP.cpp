//https://www.codechef.com/problems/FOOTCUP
#include <iostream>
using namespace std;

int main() {
	int T,teamA,teamB;
	cin >> T;
while(T--){
    cin >> teamA >> teamB;
    if (teamA!=0 && teamB !=0 && teamA-teamB==0)
        cout <<"YES" << endl; 

    else
    cout << "NO"<< endl;
}
	return 0;
}
