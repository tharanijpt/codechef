//https://www.codechef.com/problems/DRUNKALK
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int k,steps=0;
cin >> k;
for (int i=1;i<=k;i++){
    if (i%2==0){
        steps -= 1; 
    }
    else 
        steps +=3;
}
cout <<steps << endl;
}
	return 0;
}
