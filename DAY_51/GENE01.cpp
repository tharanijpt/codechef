//https://www.codechef.com/problems/GENE01
#include <iostream>
using namespace std;

int main() {
char a,b;
cin >> a >>b;
    if (a == 'G' && b =='G')
        cout <<"G" << endl;
        
    else if (a=='R' || b=='R')
        cout <<"R" << endl;
    
    else 
        cout <<"B"<< endl;

	return 0;
}
