//codechef.com/problems/PARLIAMENT 
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int T,total_members,voted_members,twice_value;
	cin >> T;
while(T--){
    cin >> total_members >> voted_members;
    twice_value = (voted_members*2);
    (twice_value>=total_members)?cout<<"YES"<<endl:cout<<"NO"<<endl;
    


}
	return 0;
}
