//https://www.codechef.com/problems/BULLET
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int x,y,z,time_taken;
cin >> x >> y >>z;
time_taken = y/x;
if ((time_taken - z) >=0 )
cout << "0" << endl;
else 
cout << abs(time_taken - z) << endl;
    
}
	return 0;
}
