//https://www.codechef.com/problems/KITCHENCOST
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int n,x,total=0;
cin >> n >>x;
int item[n];
int price[n];
for (int i=0;i<n;i++){
    cin >> item[i];
}
for (int i=0;i<n;i++){
    cin >> price[i];
}
for (int i=0;i<n;i++){
   if (item[i]>=x){
       total += price[i];
   }
}
    cout << total<< endl;
}

	return 0;
}
