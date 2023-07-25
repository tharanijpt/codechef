//https://www.codechef.com/problems/SCALENE
#include <iostream>
using namespace std;

int main() {
int t, s1 ,s2,s3;
cin >> t ;
while(t--){
    cin >> s1 >> s2 >> s3;
    if (s1!=s2 && s2!=s3 )
    cout << "YES"<< endl;
    else
    cout << "NO"<< endl;
}
	return 0;
}
