//https://www.codechef.com/problems/SIXFRIENDS
#include <iostream>
using namespace std;

int main() {
	int T,double_room,triple_room,dcost,tcost;
	cin >> T;
while(T--){
    cin >> double_room >> triple_room;
    dcost=double_room*3;
    tcost=triple_room*2;
    (dcost<=tcost)?cout<<dcost<<endl:cout<<tcost<<endl;
}
	return 0;
}
