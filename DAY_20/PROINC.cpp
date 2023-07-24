//https://www.codechef.com/problems/PROINC
#include <iostream>
using namespace std;

int main() {
	int T,selling_price,profit,initial_price,new_price;
	cin >> T;
while(T--){
    cin >> selling_price >> profit;
    initial_price = selling_price - profit;
    new_price = selling_price + selling_price/10 - initial_price;

   cout << new_price << endl;
}
	return 0;
}
