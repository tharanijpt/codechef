//https://www.codechef.com/problems/ACS
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int score,solves;
cin >> score;
solves = score/100 + score%100;
if (solves<=10)
cout << solves<< endl;
else 
cout <<-1 << endl;
}
	return 0;
}
