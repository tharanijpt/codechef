//https://www.codechef.com/problems/CHAIRS_
#include <iostream>
using namespace std;

int main() {
	int T,students,chair;
	cin >> T;
while(T--){
    cin>>students>>chair;
if (students<=chair)
    cout<< "0"<< endl;
else
    cout<<students - chair << endl;
}
	return 0;
}
