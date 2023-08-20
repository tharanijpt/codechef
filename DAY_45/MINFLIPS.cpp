//https://www.codechef.com/problems/MINFLIPS
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int length,sum=0;
cin >> length;
int arr[length];
for (int i=0;i<length;i++){
    cin >> arr[i];
    sum +=arr[i];
}
    if (sum==0)
        cout <<"0"<< endl;
    else if (abs(sum)%2==0 )
        cout << abs(sum)/2 << endl;
    else 
        cout <<"-1"<< endl;

}
	return 0;
}

