//https://www.codechef.com/problems/RETURNCHANGE
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int num;
cin >> num;
if (num%10==0){
    cout <<100-num << endl;
}
else if (num%10<5){
    cout <<100 -(num-(num%10)) << endl;
}
else{
    cout <<100-(num+ (10-num%10)) << endl;
}
}
	return 0;
}
