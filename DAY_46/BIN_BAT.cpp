//https://www.codechef.com/problems/BIN_BAT
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int n,a,b;
cin >> n >> a >>b;

int total=0;
while (n%2!=1){
    n = n/2;
    total++;
}
cout << total*a + (total-1)*b << endl;

}
	return 0;
}
