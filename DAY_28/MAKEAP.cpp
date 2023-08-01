//https://www.codechef.com/problems/MAKEAP
#include <iostream>
using namespace std;

int main() {
	int T,a,c;
	cin >> T;

while(T--){
    cin >> a >> c;
    int elements = c + a;
    if (elements % 2 == 0)
       cout << elements/2 << endl;
    else  
        cout << "-1"<< endl;
    
}
	return 0;
}
