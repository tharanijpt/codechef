//https://www.codechef.com/problems/WATERFILLING
#include <iostream>
using namespace std;

int main() {
    
    int T,i=0,empty_bottle;
	cin >> T;

    
while(T--){
    int bottle[3];
for (i=0;i<3;i++){

    cin >> bottle[i];
        
    if (bottle[i]==0){
        empty_bottle+=1;}
}
(empty_bottle > 1) ? cout<<"Water filling time"<<endl : cout<<"Not now"<<endl;
    empty_bottle=0;
}
	return 0;
}
