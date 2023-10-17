//https://www.codechef.com/problems/MARBLES
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
long long int n,k,sum=1,i;
cin >> n>>k;
for (i=1;i<k;i++){
    sum = sum*((n-k)+i)/i;
}
cout <<sum << endl;
}
	return 0;
}
