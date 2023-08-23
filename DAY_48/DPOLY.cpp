//https://www.codechef.com/problems/DPOLY
#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, max = 0, i;
        cin >> n;
        int arr[n];
        
        for (i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] != 0) {
                max = i;
            }
        }
        
        cout << max << endl;
    }
    
    return 0;
}
