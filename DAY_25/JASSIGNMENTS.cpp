//https://www.codechef.com/problems/JASSIGNMENTS
#include <iostream>
using namespace std;

int main() {
	int T,hour;
	cin >> T;

while(T--){
    cin >> hour;
    (hour + 3 <=10) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
}
	return 0;
}
