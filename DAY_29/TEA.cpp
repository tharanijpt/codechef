//https://www.codechef.com/problems/TEA
#include <iostream>
using namespace std;

int main() {
	int T,need,capacity,rupees,total;
	cin >> T;

while(T--){
    cin >> need >> capacity >> rupees;
    if (need % capacity ==0)
    cout << need/capacity*rupees << endl;
    else 
    cout << ((need/capacity)+1) * rupees<< endl;
}	return 0;
}
