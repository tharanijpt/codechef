//https://www.codechef.com/problems/FCTRL
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int a,total=0;
cin >> a;
for (int i=5;i<=a;i*=5){
    total+=a/i;
}
cout <<total << endl;
}
	return 0;
}
