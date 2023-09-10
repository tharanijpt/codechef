//https://www.codechef.com/problems/SUNDAY
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int n,num_leave;
cin >> n;
int holiday[n];
int arr[8]={6,7,13,14,20,21,27,28};
for (int i=0;i<n;i++){
    cin >> holiday[i];
}
num_leave = n+8; 
for(int i=0;i<n;i++){
    for(int j=0;j<8;j++){
    if (holiday[i]==arr[j])
    num_leave--;
}
}
    cout <<num_leave << endl;
}

	return 0;
}
