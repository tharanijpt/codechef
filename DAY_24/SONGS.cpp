https://www.codechef.com/problems/SONGS
#include <iostream>
using namespace std;

int main() {
	int T,journey,song_time;
	cin >> T;

while(T--){
    cin >> journey >> song_time;
    cout << journey / (song_time*3)  << endl;
}
	return 0;
}
