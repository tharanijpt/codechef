//https://www.codechef.com/problems/PARKINGCHARG
#include <iostream>
using namespace std;

int main() {
int x,y,h,other_hour;
cin >> x >> y >>h;
other_hour=h - 1;
cout <<(x+other_hour*y) << endl;
	return 0;
}
