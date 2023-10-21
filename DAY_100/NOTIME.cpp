//https://www.codechef.com/problems/NOTIME
#include <iostream>
using namespace std;

int main() {
int n,h,x,flag;
cin >>n >>h>>x;
int arr[n];
flag=1;

for (int i=0;i<n;i++){
    cin >> arr[i];
    if (arr[i]+x>=h){
        cout <<"YES" << endl;
        flag=1;
        break;
    }
    else {
        flag=0;
    }
}
if (flag==0){
    cout <<"NO" << endl;
}
	return 0;
}
