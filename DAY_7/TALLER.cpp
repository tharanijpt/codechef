//https://www.codechef.com/problems/TALLER
#include <iostream>
using namespace std;

int main() {
int T,A,B;
cin >> T;
while(T--){
    cin >>A >>B;
    (max(A,B)==A)?cout<<"A"<<endl : cout<<"B"<<endl;
    
}
	return 0;
}
