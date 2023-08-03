//https://www.codechef.com/problems/MINCARS
#include <iostream>
using namespace std;

int main() {
	int T,people;
	cin >> T;

while(T--){
    cin >> people;
    if (people%4==0)
    cout <<people/4 << endl;
    else 
    cout << people/4 +1<< endl;
}
	return 0;
}
