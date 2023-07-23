//https://www.codechef.com/problems/TCKTFINE
#include <iostream>
using namespace std;

int main() {
	int T,fine,total_passengers,passengers_have_ticket;
	cin >> T;
while(T--){
    cin >> fine >> total_passengers>>passengers_have_ticket;
    cout <<fine*(total_passengers - passengers_have_ticket) << endl;
}
	return 0;
}
