//https://www.codechef.com/problems/CHEFEREN
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
    int i,n,a,b,sum=0;
    cin >>n >> a>>b;
for (i=1;i<=n;i++){
    if (i%2==0)
    sum+=a;
    else 
    sum+=b;
}
    cout << sum << endl;
    sum=0;
}
	return 0;
}
