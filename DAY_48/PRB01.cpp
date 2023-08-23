//https://www.codechef.com/problems/PRB01
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int n,i;
cin >> n;
for (i=2;i<n;i++){
    if (n%i==0){
        break;
    }
}
(i==n) ? cout<<"yes"<<endl : cout<<"no"<<endl;
}
	return 0;
}
