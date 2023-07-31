
//https://www.codechef.com/problems/EXPERT
#include <iostream>
using namespace std;

int main() {
	float T,x,y,percent;
	cin >> T;

while(T--){
    cin >> x >>y;
    ((y/x) * 100 >= 50)  ? cout<<"YES"<<endl : cout<<"NO"<<endl;
}
	return 0;
}
