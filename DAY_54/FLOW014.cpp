//https://www.codechef.com/problems/FLOW014
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int h;
float c,t;
cin >> h >>c >>t;
    if (h>50 && c < 0.7 && t>5600)
        cout <<"10" << endl;
    else if (h>50 && c < 0.7)
        cout <<"9" << endl;
    else if (t>5600 && c < 0.7)
        cout <<"8" << endl;
    else if (h>50 && t > 5600)
        cout <<"7" << endl;
    else if (h>50 || c < 0.7 || t>5600)
        cout <<"6" << endl;
    else 
        cout <<"5" << endl;


}
	return 0;
}
