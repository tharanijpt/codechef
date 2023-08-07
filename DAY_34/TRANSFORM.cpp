//https://www.codechef.com/problems/TRANSFORM
#include <iostream>
using namespace std;

int main() {
	int T,mushroom;
	cin >> T;

while(T--){
    cin >> mushroom;
    if (mushroom%3==0)
    cout <<"normal" << endl;
    else if (mushroom%3==1)
    cout <<"huge" << endl;
    else 
    cout <<"small" << endl;
}
	return 0;
}
