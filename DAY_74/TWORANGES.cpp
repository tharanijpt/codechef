//https://www.codechef.com/problems/TWORANGES
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int a,b,c,d,range=0;
cin >>a>>b>>c>>d;
 int min1 = min(a,c);
 int max2 = max(b,d);
     for (min1;min1<=max2;min1++){
         if ((min1<=b && min1 >=a) || (min1>=c && min1<=d)){
             range++;
         }
     }
 cout <<range<< endl;
}
	return 0;
}
