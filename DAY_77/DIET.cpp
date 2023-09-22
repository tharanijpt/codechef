//https://www.codechef.com/problems/DIET
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
    
int a,n,eat,store=0;
cin >> n >> eat;
int flag=0;


    for (int i=0;i<n;i++){
       
        cin >> a;
        
            if(a+store>=eat){
                store += a - eat;
                
            }
            else if (flag == 0) {
                flag=i+1;
                }
    }
                
	    if(flag>0)
	    cout<<"NO "<<flag<<endl;
	    else
	    cout<<"YES"<<endl;
            
    
}
	return 0;
}
