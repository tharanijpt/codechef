//https://www.codechef.com/problems/SMARTER
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
float l,v1,v2;
cin >> l >> v1 >> v2;
int t_time = ceil(l/v1);
int h_time = ceil(l/v2);
    if (h_time<t_time){
        cout <<t_time - h_time - 1 << endl;
    }
    else    
        cout <<"-1" << endl;
    
}
	return 0;
}
