//https://www.codechef.com/problems/MY1STCONTEST
#include <iostream>
using namespace std;

int main() {
int total,notsubmited,solved;
    int submited;
    cin >> total >> notsubmited >> solved;
    submited=total-notsubmited;
    cout<<submited <<" "<<submited-solved;
return 0;

}
