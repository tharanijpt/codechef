//https://www.codechef.com/problems/CHEFCAND 
#include <iostream>
using namespace std;

int main() {
	int T,children,chocolates,need;
	cin >> T;

while(T--){
    cin >> children >> chocolates;
    if (children > chocolates){
        need = children - chocolates;
        {
        if ((need/4)*4 >= need )
            cout <<need/4 << endl;
        else
            cout << need/4 + 1 << endl;
        }}
    else 
    {cout << "0"<< endl;}
    
}
	return 0;
}
