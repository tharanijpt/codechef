//https://www.codechef.com/problems/BULBLIFE
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int n,x,a,sum=0;
cin >> n >> x ;
for (int i=0;i<n-1;i++){
    cin >> a;
    sum = sum + a;
}
    int y = n*x - sum;
cout << (y>0 ? y : 0) << endl;
}
	return 0;
}
