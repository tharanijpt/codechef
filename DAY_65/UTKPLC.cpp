//https://www.codechef.com/problems/UTKPLC
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
char first,second,third;
cin >> first >> second >> third;
char x,y;
cin >> x >>y;
if (first == x || first == y)
    cout <<first << endl;
else if (second==x || second==y)
    cout <<second << endl;
else 
    cout <<third << endl;}
	return 0;
}
