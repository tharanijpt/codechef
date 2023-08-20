//https://www.codechef.com/problems/CHN15A
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int size,k,count=0;
cin >> size >> k;
int arr[size];
for (int i=0;i<size;i++){
    cin >> arr[i];
    if ((arr[i]+k)%7==0)
    {
        count++;
    }
}
cout<<count<<endl;
count=0;
}
	return 0;
}
