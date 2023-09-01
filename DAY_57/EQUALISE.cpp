//https://www.codechef.com/problems/EQUALISE?tab=statement
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
    int a,b,flag=1;
    cin >> a >> b;
    
if(a==b){
    cout <<"YES" << endl;
}
else if (a<b){
    while (a<=b){
            flag=1;
        a = a*2;
        if (a==b){
            cout << "YES"<< endl;
            break;
        }
        else 
        flag=0;
    }
    if (flag==0){
        cout <<"NO" << endl;
    }
}

else {

while (a>b){
        flag=1;
        b = b*2;
        if (a==b){
            cout << "YES"<< endl;
            break;
        }
        else 
        flag=0;
    
}
    
    if (flag==0){
        cout <<"NO" << endl;
    }
}
}
	return 0;
}
