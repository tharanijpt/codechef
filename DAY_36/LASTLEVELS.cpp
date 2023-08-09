//https://www.codechef.com/problems/LASTLEVELS
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int x,y,z,game_time;
cin >> x >> y >>z;
game_time = x*y + (x/3)*z  ;

(x%3==0)?cout << game_time - z<< endl : cout << game_time << endl;

}
	return 0;
}
