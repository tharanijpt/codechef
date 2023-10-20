//https://www.codechef.com/problems/FIRSTANDLAST
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int n,sum,temp;
cin >>n;
int arr[n];
for (int i=0;i<n;i++){
    cin >> arr[i];
}
sum = arr[0] + arr[n-1];


for(int i=0;i<n-1;i++){
    temp = arr[i] + arr[i+1];
    sum = max(temp,sum);
    
}

cout <<sum<< endl;

}
	return 0;
}
