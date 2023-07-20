//https://www.codechef.com/problems/EQUALDIST
#include <iostream>
using namespace std;

int main() {
	int T,A,B;
	cin >> T;
while(T--){
    cin >> A >> B;
    ((A+B) % 2 == 0 )?cout<<"YES"<<endl : cout<<"NO"<<endl;
}
	return 0;
}
