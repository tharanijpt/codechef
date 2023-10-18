//https://www.codechef.com/problems/PRICECON
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int n,k,sum=0,fair=0;
cin >>n>>k;
int arr[n];
for (int i=0;i<n;i++){
    cin >> arr[i];
    fair+=arr[i];
    if (arr[i]>k)
        arr[i]=k;
    sum += arr[i];
}
cout <<fair-sum << endl;
}
	return 0;
}
