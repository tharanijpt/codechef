//https://www.codechef.com/problems/AMR15A
#include <iostream>
using namespace std;

int main() {
	int T,weapons;
	cin >> T;

while(T--){
    cin >> weapons;
    (weapons % 2 ==0) ? cout<<"READY FOR BATTLE"<<endl : cout<<"NOT READY"<<endl;
}
	return 0;
}
