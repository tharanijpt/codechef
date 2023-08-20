//https://www.codechef.com/problems/SINGLEUSE
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int h,x,y;
cin >> h >> x >>y;
int attack=1;

while(h>0){
    h=h-y;
    if (h<=0){
    cout <<1<< endl;}
    else{
        while(h>0){
            h=h-x;
            attack++;
        }
        cout << attack << endl;
    }
    
}

}
	return 0;
}
