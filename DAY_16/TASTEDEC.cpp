#include <iostream>
using namespace std;

int main() {
	int T,choco,candy;
	cin >> T;
while(T--){
    cin >> choco >> candy;
if (choco*2 > candy*5)
    cout <<"Chocolate"<< endl;
else if (choco*2 < candy*5)
    cout <<"Candy" << endl;
else
    cout <<"Either"<< endl;
}
	return 0;
}