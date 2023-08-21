//https://www.codechef.com/problems/INDIVISIBLE
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int a,b,c,i=1;
cin >> a >> b >>c;
int flag=1;

while(flag==1){
    if (a%i!=0 && b%i!=0 && c%i!=0){
        cout <<i<<endl;
        flag=0;
    }
    i++;
}
    
}
	return 0;
}
