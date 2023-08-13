//https://www.codechef.com/problems/AORB
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int a,c,b;
cin >> a >>c ;
b=a+c;
int a_b = (500 - (a*2)) + 1000 - (b*4);
int b_a =(1000 - (c*4)) + 500 - ((c+a)*2);
cout << max(a_b,b_a)<< endl;

}
	return 0;
}
