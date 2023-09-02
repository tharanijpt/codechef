//https://www.codechef.com/problems/NEWCC
#include <iostream>
using namespace std;

int main() {
int a,b;
cin >> a >> b;
    if (a==b)
        cout <<"Same" << endl;
    else if (a>b )
        cout <<"New" << endl;
    else 
        cout <<"Old" << endl;

	return 0;
}
