//https://www.codechef.com/problems/WORDLE
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
string s,t;
cin >> s >>t;
for (int i=0;i<5;i++){
    if (s[i]==t[i])
    cout <<"G" ;
    else 
    cout <<"B";
}
cout << endl;
}

	return 0;
}
