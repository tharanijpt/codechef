//https://www.codechef.com/problems/LEAGUE
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int n;
cin >> n;
int first = (n-1)*3;
int second = ((n-2)-((n-2)/2))*3;
cout <<first-second<< endl;
}
	return 0;
}
