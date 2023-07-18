//https://www.codechef.com/problems/FOURTICKETS
#include <iostream>
using namespace std;

int main() {
	int T,cost;
	cin >> T;
while(T--){
    cin >> cost;
    (cost*4<=1000)?cout<<"YES"<<endl:cout<<"NO"<<endl;
}
	return 0;
}
