//https://www.codechef.com/problems/TAXES
#include <iostream>
using namespace std;

int main() {
	int T,X;
cin >> T;
while(T--){    
    cin >> X;
    if (X>100)
    {
        X=X-10;
        cout << X<< endl;
        
    }
    else
    cout << X<< endl;
    
}

}
