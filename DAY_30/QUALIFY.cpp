//https://www.codechef.com/problems/QUALIFY
#include <iostream>
using namespace std;

int main() {
	int T,need,easy,hard;
	cin >> T;

while(T--){
    cin >> need >>easy >> hard;
    (easy + hard*2 >= need) ? cout<<"qualify"<<endl : cout<<"notqualify"<<endl;
}
	return 0;
}
