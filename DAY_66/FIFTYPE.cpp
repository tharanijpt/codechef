//https://www.codechef.com/problems/FIFTYPE
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int n,r=0;
cin >> n;
while(n!=50){
    if(n>50){
        n-=3;
        r++;
    }
    else{
        n+=2;
        r++;}
}
cout <<r<< endl;
}
	return 0;
}
