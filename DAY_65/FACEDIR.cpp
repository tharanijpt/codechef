//https://www.codechef.com/problems/FACEDIR
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int x;
cin >> x;
if (x>4){
        x=x%4;
}

if (x==0 || x==4)
        cout <<"North" << endl;
    else if (x==1)
        cout <<"East" << endl;
    else if (x==2)
        cout <<"South" << endl;
    else
        cout <<"West" << endl;
}
	return 0;
}
