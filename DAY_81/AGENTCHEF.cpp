//https://www.codechef.com/problems/AGENTCHEF
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
float a;
float profit=0;
cin >> a;

    profit += a*0.2;
int count = 100/profit;
cout <<((profit*count>=100) ? count : (count + 1))<< endl;
}
	return 0;
}
