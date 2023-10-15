//https://www.codechef.com/problems/BRUNCH
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int a,b,need;
cin >>a>>b;
need = 20*b;
if (need<=a){
    cout <<20 << endl;
}
else{
    cout <<a/b << endl;
}
}
	return 0;
}
