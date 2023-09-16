//https://www.codechef.com/problems/LARGESECOND
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int n,a=0,b=0,temp=0;
cin >> n;
int arr[n];
for (int i=0;i<n;i++){
    cin >> arr[i];
    if (arr[i]>a){
        b = a;
        a = arr[i];
    }
    else if (arr[i]>b && arr[i]!=a){
        b=arr[i];
    }
}
cout <<a+b << endl;
}
	return 0;
}
