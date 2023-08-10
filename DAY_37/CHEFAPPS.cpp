//https://www.codechef.com/problems/CHEFAPPS
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int s,x,y,z;
cin >> s >> x >> y >> z;
if (s-(x+y)>=z)
    cout <<0<< endl;
else if (s-x>=z)
    cout <<1<< endl;
else 
    cout <<2<< endl;
    
}
	return 0;
}
