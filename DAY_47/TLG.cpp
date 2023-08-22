//https://www.codechef.com/problems/TLG
#include <iostream>
using namespace std;

int main (){
    int rounds;
    cin >> rounds;
    int a=0,b=0;
    int lead=0;
    int player=0;
while (rounds--){
    int s1,s2;
    cin >> s1 >> s2;
    a+=s1;
    b+=s2;
    int temp_lead= abs(a-b);
    if (temp_lead>lead){
        lead = temp_lead;
        (a>b) ? player=1 : player=2;
    }

}
    cout <<player <<" " <<lead << endl;
    return 0;
}
