//https://www.codechef.com/problems/PALL01
#include <iostream>
#include <string>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int org,temp=0;
cin >> org;
int num=org;
    int j = to_string(org).length();
for(int i=0;i<j;i++){
    temp = temp*10;
    temp += num%10;
    num = num/10;
}
(temp==org) ? cout<<"wins"<<endl : cout<<"loses"<<endl;
}
	return 0;
}
