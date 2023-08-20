//https://www.codechef.com/problems/REACHFAST
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int chef,chefina,steps;
cin >> chef >> chefina >> steps;
if (chef-chefina==0)
cout <<0 << endl;
else 
cout << (abs(chefina-chef)+(steps-1))/steps << endl;

}
	return 0;
}
