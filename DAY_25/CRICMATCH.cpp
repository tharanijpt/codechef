//https://www.codechef.com/problems/CRICMATCH
#include <iostream>
using namespace std;

int main() {
	int T,score,overs;
	cin >> T;

while(T--){
    cin >> score >> overs;
    (score <= overs * 36)  ? cout<<"YES"<<endl : cout<<"NO"<<endl;
}
	return 0;
}
