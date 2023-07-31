//https://www.codechef.com/problems/RACE400M	
#include <iostream>
using namespace std;

int main() {
    int a,b,c,t,lowest;
    cin >> t;
while (t--){
    cin >> a >> b >> c ;
    lowest = min (min(a, b), c);
    if (lowest==a)
        cout << "alice"<< endl;

    else if (lowest==b)
        cout << "bob" << endl;
    
    else 
        cout << "charlie" << endl;
    
}
	return 0;
}
