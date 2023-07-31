//https://www.codechef.com/problems/CHEFGAMES
#include <iostream>
using namespace std;

int main() {
    int i,t,final;
    cin >> t;
    int ref[t];
while (t--){
    for (i=0;i<4;i++) {
        cin >> ref[i];
        if (ref[i]==1)
            final+=1;
        
    }
    (final>0) ? cout<<"out"<<endl : cout<<"in"<<endl;
    final=0;
    
}
	return 0;
}
