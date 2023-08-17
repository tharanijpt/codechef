//https://www.codechef.com/problems/DISTINCTCOL
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int n,temp=0;
cin >> n;
int arr[n];
for (int i=0; i<n;i++){
    cin>> arr[i];
    if (arr[i]>=temp)
    temp=arr[i];
}
 cout << temp<< endl;
}
	return 0;
}
