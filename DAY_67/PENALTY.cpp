//https://www.codechef.com/problems/PENALTY
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int t1[5];
int t2[5];
int sum1=0,sum2=0;
for (int i=0;i<5;i++){
    cin >> t1[i];
    sum1 += t1[i];
}
for (int i=0;i<5;i++){
    cin >> t2[i];
    sum2 += t2[i];
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
