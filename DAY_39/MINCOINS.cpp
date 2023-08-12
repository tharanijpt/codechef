//codechef.com/problems/MINCOINS
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int rupees,total=0;
cin >> rupees;
if (rupees%5==0){
total=rupees/10;
rupees=rupees%10;
total+=rupees/5;
cout << total<< endl;
}
else 
cout << "-1" << endl;
}
	return 0;
}
