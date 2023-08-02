//https://www.codechef.com/problems/NEARESTEXIT
#include <iostream>
using namespace std;

int main() {
	int T,seat;
	cin >> T;

while(T--){
    cin >> seat;
    (seat<=50) ? cout<<"left"<<endl : cout<<"right"<<endl;
}
	return 0;
}
