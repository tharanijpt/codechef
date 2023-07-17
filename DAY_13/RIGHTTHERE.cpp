
//https://www.codechef.com/problems/RIGHTTHERE
#include <iostream>
using namespace std;

int main() {
	int T,people,capacity;
	cin >> T;
while(T--){
    cin>>people>>capacity;
    (people<=capacity) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
}
	return 0;
}
