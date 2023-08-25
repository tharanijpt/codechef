//https://www.codechef.com/problems/NEARESTCOURT
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int c,ch,final;
cin >> c >>ch;
if ((abs(c-ch))%2==0)
    final = round(abs(c-ch)/2);
else 
    final = (abs(c-ch)/2)+  1;
cout << final << endl;
    
}
	return 0;
}
