//https://www.codechef.com/problems/SUPCHEF
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int exam,episode,duration;
cin >> exam >> episode >> duration;
(exam > episode*duration ) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
}
	return 0;
}
