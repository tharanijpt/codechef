//https://www.codechef.com/problems/RANKLISTPAGE
#include <iostream>
using namespace std;

int main() {
	int T,rank;
	cin >> T;

while(T--){
    cin >> rank;
    if (rank%25==0)
        cout << rank/25 << endl;
    else
    cout << rank/25 + 1 << endl;
    
}
	return 0;
}
