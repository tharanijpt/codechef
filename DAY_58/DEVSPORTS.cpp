//https://www.codechef.com/problems/DEVSPORTS
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int amt,spent,t1,t2,t3;
cin >> amt >> spent >> t1 >>t2 >> t3 ;
int need = t1 + t2 + t3;
int left = amt - spent;

if (left >= need )
    cout <<"Yes" << endl;
else
    cout <<"No" << endl;
    
}
	return 0;
}
