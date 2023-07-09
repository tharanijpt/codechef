//https://www.codechef.com/problems/BLITZ3_2
#include <iostream>
using namespace std;

int main() {
int T,turns,remain,left,final;
cin >> T;
while(T--){
    cin>>turns>>remain>>left;
    final=(2*(180+turns))-(left+remain);
    cout<<final<<endl;
}
	return 0;
}
