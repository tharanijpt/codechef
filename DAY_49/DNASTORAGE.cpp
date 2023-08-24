//https://www.codechef.com/problems/DNASTORAGE
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int n;
cin >> n;
string a;
cin >>a;
for (int i=0;i<n;i=i+2){
    if (a[i]=='0'){
        if (a[i+1]=='0')
            cout <<"A";
        else 
            cout <<"T";
    }
    else if (a[i]=='1') {
        if (a[i+1]=='0')
            cout <<"C";
        else 
            cout <<"G";}

}
cout << endl;
}
	return 0;
}
