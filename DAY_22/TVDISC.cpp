//https://www.codechef.com/problems/TVDISC
#include <iostream>
using namespace std;

int main() {
int t,a,b,c,d;
cin >> t;
while(t--){
    cin >> a>>b>>c>>d;
    if(a-c<b-d)
    cout << "first"<< endl;
    else if (b-d<a-c)
    cout << "second"<<endl;
    else
    cout<<"any"<<endl;
}
	return 0;
}
