//https://www.codechef.com/problems/DECINC
#include <iostream>
using namespace std;

int main() {
int a;
cin >> a;
if(a%4!=0){
    a--;
}
else
a++;
cout << a<< endl;
	return 0;
}
