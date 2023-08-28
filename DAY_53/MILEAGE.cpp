//https://www.codechef.com/problems/MILEAGE
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
    float n,x,y,a,b,d,p;
    cin>>n>>x>>y>>a>>b;
    p=(n/a)*x;
    d=(n/b)*y;
    if(p==d)
        cout <<"ANY" << endl;
    else if (p<d )
        cout <<"PETROL" << endl;
    else 
        cout <<"DIESEL" << endl;

    
}
	return 0;
}
