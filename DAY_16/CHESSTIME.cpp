//https://www.codechef.com/problems/CHESSTIME
#include <iostream>
using namespace std;

int main() {
	int T,hour;
	cin >> T;
while(T--){
    cin >> hour;
    cout <<(hour*60)/20<< endl;
}
	return 0;
}
