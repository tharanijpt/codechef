//https://www.codechef.com/problems/AVGPROBLEM
#include <iostream>
using namespace std;

int main() {
    int t;
    float a,b,c,avg;
    cin >> t;
    while (t--){
        cin >> a >>b >>c;
        avg = (a+b)/2;
    
    (avg > c) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    }
	return 0;
}
