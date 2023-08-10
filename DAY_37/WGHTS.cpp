//https://www.codechef.com/problems/WGHTS
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
  
int weight,a,b,c;
cin >> weight >> a >> b >> c;
  
if(weight==a || weight==b || weight==c )
  cout <<"yes" << endl;
else if (weight==a+b || weight==b+c || weight==a+c)
  cout <<"yes" << endl;
else if (weight==a+b+c)
  cout <<"yes" << endl;
else 
  cout <<"no" << endl;
}
	return 0;
}
