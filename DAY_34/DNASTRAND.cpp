//https://www.codechef.com/problems/DNASTRAND
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
    int n;
    cin >> n;
    char ch[n];
    for (int i=0;i<n;i++){
        cin >> ch[i];
        if (ch[i]=='A')
            cout << "T";
        else if (ch[i]=='T')
            cout << "A";
        else if (ch[i]=='G')
            cout << "C";
        else if (ch[i]=='C')
            cout << "G";
    }
    cout << endl;
}
	return 0;
}
