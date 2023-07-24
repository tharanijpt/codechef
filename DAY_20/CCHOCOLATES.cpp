//https://www.codechef.com/problems/CCHOCOLATES
#include <iostream>
using namespace std;

int main() {
	int T, five_rupee_coins, ten_rupee_coin, cost, rupees_available, chocolate;
	cin >> T;
while(T--){
    cin >> five_rupee_coins >> ten_rupee_coin >> cost;
    rupees_available = 5*five_rupee_coins + 10*ten_rupee_coin;
    chocolate = rupees_available/cost;
    cout <<chocolate << endl;


}
	return 0;
}
