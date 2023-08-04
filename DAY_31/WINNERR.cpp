//https://www.codechef.com/problems/WINNERR
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
    int a,b,p,q;
    cin >> a >> b >> p >>q;
    int pmax = max(a,b);
    int qmax = max(p,q);
    if (pmax > qmax)
        cout <<"q" << endl;
    else if (pmax < qmax )
        cout <<"p" << endl;
    else 
        cout <<"tie" << endl;

}
	return 0;
}
