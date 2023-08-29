//https://www.codechef.com/problems/MELTGOLD
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
    int x,y,i;
    cin >> x >> y;
    for (i=1;i>0;i++){
        if (x<=y){
            cout <<i-1<< endl;
            break;
        }
        else{
            y = i+y;
        }
    }
    
}
	return 0;
}
