//https://www.codechef.com/problems/AMR15A
#include <iostream>
using namespace std;

int main() {
	int i,T,ready=0,not_ready=0;
	cin >> T;
    int arr[T];
    
while(T--){
        
        cin >> arr[i];
        if (arr[i]%2==0)
            ready +=1;
        else 
            not_ready +=1;
    
}
    (ready > not_ready) ? cout<<"READY FOR BATTLE"<<endl : cout<<"NOT READY"<<endl;
    

	return 0;
}

