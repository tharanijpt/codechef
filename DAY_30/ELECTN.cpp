//https://www.codechef.com/problems/ELECTN
#include <iostream>
using namespace std;

int main() {
	int T,n,x,eligible;
	cin >> T;

while(T--){
    cin >> n >> x;
    int people[n];
    for (int i=0;i<n;i++){
        cin >> people[i];
    if (people[i] >=x)
         eligible +=1;
    }
    cout << eligible<< endl;
    eligible=0;
}
	return 0;
}
