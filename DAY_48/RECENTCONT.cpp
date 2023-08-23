//https://www.codechef.com/problems/RECENTCONT
#include <iostream>
#include <string>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int n,a=0,b=0;
cin >> n;
string arr[n];
for (int i=0;i<n;i++){
    cin >> arr[i];
    if (arr[i]=="START38")
    a++;
    else 
    b++;
}
cout << a << " " <<b << endl;
}
	return 0;
}
