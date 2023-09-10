//https://www.codechef.com/problems/HOWMANY
#include <iostream>
using namespace std;

int main() {
int num,c=0;
cin >> num;
while(num!=0){
  num = num/10;
   c++;
}
    cout << ((c <= 3) ? to_string(c) : "More than 3 digits") << endl;

    return 0;
}
