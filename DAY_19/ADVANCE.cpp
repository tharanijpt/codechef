//https://www.codechef.com/problems/ADVANCE
#include <iostream>
using namespace std;

int main() {
	int T,chef_rating,opponent_rating,recommended;
	cin >> T;
while(T--){
    cin >> chef_rating >> opponent_rating;
    recommended = chef_rating + 200;
    
	if (opponent_rating <= recommended && chef_rating <= opponent_rating)
        cout <<"YES" << endl;

    else 
        cout <<"NO" << endl;

}
	return 0;
}
