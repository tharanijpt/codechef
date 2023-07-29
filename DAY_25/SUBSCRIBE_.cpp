//https://www.codechef.com/problems/SUBSCRIBE_
#include <iostream>
using namespace std;

int main() {
	int T,people,cost,total;
	cin >> T;

while(T--){
    cin >> people >> cost;
    
if (people%6 == 0)
    total = people/6 *cost;
else 
    total = (people/6 + 1)* cost;

    cout << total<< endl;
}
	return 0;
}
