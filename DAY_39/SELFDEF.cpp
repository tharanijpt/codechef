//https://www.codechef.com/problems/SELFDEF
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int n,eligible=0;
cin >> n;
int arr[n];
for (int i=0;i<n;i++){
    cin >> arr[n];
    if (arr[n]<=60 && arr[n]>=10)
    eligible+=1;
}
cout <<eligible << endl;
}
	return 0;
}
