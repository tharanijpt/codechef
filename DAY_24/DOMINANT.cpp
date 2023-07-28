//https://www.codechef.com/problems/DOMINANT
#include <iostream>
using namespace std;

int main() {
	int T,a,b,c;
	cin >> T;

while(T--){
    cin >> a>> b>>c;
    
   	if (a>b+c || b>a+c || c>a+b)
        cout <<"yes" << endl;
        
    else 
        cout <<"no" << endl;

}
	return 0;
}
