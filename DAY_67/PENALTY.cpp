//https://www.codechef.com/problems/PENALTY
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int t[11];
int sum1=0,sum2=0;
for(int i=1;i<11;i++){
    cin >> t[i];
}
for (int i=1;i<10;i+=2){
    sum1 += t[i];
}
for (int i=2;i<=10;i+=2){
    sum2 += t[i];
}
    if (sum2==sum1)
        cout <<"0" << endl;
    else if ( sum1>sum2)
        cout <<"1" << endl;
    else 
        cout <<"2" << endl;

}
	return 0;
}
