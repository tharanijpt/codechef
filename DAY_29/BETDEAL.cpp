//https://www.codechef.com/problems/BETDEAL
#include <iostream>
using namespace std;

int main() {
	float T,discount1,discount2,cost1,cost2;
	cin >> T;
	

while(T--){
    cin >> discount1 >> discount2;
    cost1 = 100 - discount1;
    cost2 = 200 - discount2*2;
if (cost1 > cost2)
    cout << "second"<< endl;
else if (cost2 > cost1)
    cout <<"first" << endl;
else 
    cout << "both"<< endl;
}
	return 0;
}
