//https://www.codechef.com/problems/BULLBEAR
#include <iostream>
using namespace std;

int main() {
	int T,cost,selling;
	cin >> T;
while(T--){
    cin>>cost>>selling;
    if (cost>selling)
        cout<<"LOSS"<<endl;
    else if (cost==selling)
        cout<<"NEUTRAL"<<endl;
    else
        cout<<"PROFIT"<<endl;
}
	return 0;
}
