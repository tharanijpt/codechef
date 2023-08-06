//https://www.codechef.com/problems/PRIMEDICE
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
    int a,b,sum,i,divident;
    cin >> a >>b ;
    sum =a+b;
    for (i=1;i<=sum;i++){
        if(sum%i==0){
        divident+=1;}
        } 
    sum=0;
    
    if (divident>2)
    cout << "bob"<< endl;
    else
    cout << "alice"<< endl;
    divident=0;
    }
	return 0;
}
