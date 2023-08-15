//https://www.codechef.com/problems/POLYBAGS
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int items;
cin>>items;
if(items%10==0)
cout << items/10 << endl;
else 
cout << items/10 + 1 << endl;
}
	return 0;
}
  
