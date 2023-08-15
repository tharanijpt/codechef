//https://www.codechef.com/problems/PASSORFAIL
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int n,x,p;
cin >> n >> x >>p;
if (((x*3) - (n-x)) >=p)
cout <<"pass" << endl;
else 
cout <<"fail" << endl;
    
}
	return 0;
}
