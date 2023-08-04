//https://www.codechef.com/problems/CHEFSCORE
#include <iostream>
using namespace std;

int main(){
    int t,n,x,y,mark=0;
    cin >> t;
    while(t--){
        cin >> n>> x>> y;
        if (y<=(n*x)&&(y%x==0))
        {
            cout << "yes"<< endl;
        }
        else 
        cout << "no"<< endl;
        
        
    }
return 0;
    
}
