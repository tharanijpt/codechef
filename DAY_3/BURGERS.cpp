//https://www.codechef.com/problems/BURGERS

#include <iostream>
using namespace std;
int main() {
int T,patties,buns;
cin>>T;
while(T--){
    cin>>patties;
    cin>>buns;
    cout << min(patties,buns) << endl;
}
	return 0;
}
