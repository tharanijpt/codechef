//https://www.codechef.com/problems/IPLTRSH
#include <iostream>
using namespace std;

int main() {
	int T,N,M;
cin >> T;
while(T--){
    cin >> N;
    cin >> M;
    if (M<N) 
    cout << N-M << endl;
    else
    cout << 0 << endl;
}
	return 0;
}
