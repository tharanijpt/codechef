//https://www.codechef.com/problems/OCTATHON
#include <iostream>
using namespace std;

int main() {
int h;
cin >>h;
    if (h<3)
        cout <<"GOLD" << endl;
    else if (h>=6 )
        cout <<"BRONZE" << endl;
    else 
        cout <<"SILVER" << endl;

	return 0;
}
