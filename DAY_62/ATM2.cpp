//https://www.codechef.com/problems/ATM2
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int n,m;
cin >> n >>m;
int arr[n];
for (int i=0; i<n; i++){
    cin >> arr[i];
    if (arr[i]<=m){
        cout<<1;
        m = m-arr[i];
    }
    else 
    cout <<0;
}
cout << endl;
}

	return 0;
}
