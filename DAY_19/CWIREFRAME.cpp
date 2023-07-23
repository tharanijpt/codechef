//https://www.codechef.com/problems/CWIREFRAME
#include <iostream>
using namespace std;

int main() {
	int T,length,width,cost,total;
	cin >> T;
while(T--){
    cin >> length>> width>> cost;
    total=(length*2 + width*2)*cost;
    cout << total<< endl;
}
	return 0;
}

