//https://www.codechef.com/problems/NETFLIX
#include <iostream>
using namespace std;

int main() {
	int T,a,b,c,d;
	cin >> T;

while(T--){
    cin >> a>>b>>c>>d;
    
	if (a+b>=d || a+c>=d || b+c>=d)
        cout <<"yes" << endl;
        
    else 
        cout <<"no" << endl;

}
	return 0;
}
