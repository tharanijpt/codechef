///https://www.codechef.com/problems/GOODWEAT
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int arr[7];
int sun=0,rain=0;
for (int i=0;i<7;i++){
    cin >> arr[i];
    (arr[i]==1) ? sun++ : rain++;
}
if (sun>rain)
    cout <<"YES"<< endl;
else 
cout <<"NO" << endl;
}
	return 0;
}
