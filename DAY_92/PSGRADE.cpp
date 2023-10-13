//https://www.codechef.com/problems/PSGRADE
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int a,b,c,t,A,B,C;
cin >>a>>b>>c>>t>>A>>B>>C;
if (A>=a && B>=b && C>=c && A+B+C>=t){
    cout <<"YES"<< endl;
}
else 
    cout <<"NO" << endl;

}
	return 0;
}
