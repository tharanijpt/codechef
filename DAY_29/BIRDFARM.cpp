#include <iostream>
using namespace std;

int main() {
    int T, x, y, z;
    cin >> T;

    while (T--) {
        
	    cin>>x>>y>>z;
	    if(z%x!=0 && z%y!=0)
	        cout<<"NONE"<<endl;
	    else if(z%x==0 && z%y==0)
            cout<<"ANY"<<endl;
	    else if(z%x==0)
	        cout<<"CHICKEN"<<endl;
	    else 
	        cout<<"DUCK"<<endl;
	    
	}
	return 0;
}
