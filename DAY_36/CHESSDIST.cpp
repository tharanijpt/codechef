//https://www.codechef.com/problems/CHESSDIST
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int x1,y1,x2,y2,distance;
cin >> x1 >> y1 >> x2 >> y2; 
distance = max (abs(x1-x2),abs(y1-y2));
cout << distance<< endl;
}
	return 0;
}
