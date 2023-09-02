//https://www.codechef.com/problems/HDIVISR
#include <iostream>
using namespace std;

int main() {
int num,max=1,i;
cin >> num;
for (i=1;i<=10;i++){
    
    if (num % i == 0) {
        max = i;
    }
}
cout <<max << endl;
	return 0;

}
