//https://www.codechef.com/problems/INSTDUM
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int n,count=0,runs=0;
cin >> n;
int arr[n+1];
for (int i=1;i<=n;i++){
    cin >> arr[i];
    runs+=arr[i];
    if (((static_cast<float>(runs) / i) * 100) == 100.0){
        count++;
    }
}
cout <<count << endl;
}
	return 0;
}
