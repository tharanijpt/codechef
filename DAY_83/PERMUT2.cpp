//https://www.codechef.com/problems/PERMUT2
#include <iostream>
using namespace std;

int main() {

while(true){
    int n;
    cin >>n;
    if (n!=0){
    int arr[n];
    for (int i=0;i<n;i++){
        cin >> arr[i];
        }
    
    bool flag=true;
        for (int i=0;i<n;i++){
    if(i+1 == arr[arr[i]-1])
        flag==true;
    else {
        flag=false;
        break;}}
    if (n>0){
        cout << ((flag) ? "ambiguous"  : "not ambiguous") <<endl;
    }
}
else break;
}
}
