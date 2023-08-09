//https://www.codechef.com/problems/FILLCANDIES
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int n,k,m,bag_capacity;
cin >> n >> k >> m;
bag_capacity = m*k;

if (n==bag_capacity){
    cout <<1 << endl;}
else if(n%bag_capacity==0)
    cout << n/bag_capacity << endl;
else    
    cout <<n/bag_capacity + 1 << endl;
}
	return 0;
}
