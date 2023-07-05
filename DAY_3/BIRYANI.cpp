//https://www.codechef.com/problems/BIRYANI
#include <iostream>
using namespace std;

int main() {
	int T,week,cost,total;
	cin >> T;
	while(T--){
	    cin >> week;
	    cin >> cost;
	    total =week*cost;
	    cout << total << endl;
	}
	return 0;
}
