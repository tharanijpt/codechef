//https://www.codechef.com/problems/LUCKYN
#include <iostream>
using namespace std;

int main() {
    	int T;
	cin >> T;

while(T--){
int num ;
cin >> num;
while (num>0)
    {
        int temp=num%10;
        num = num/10;
    if (temp==7)
        {
        cout << "yes"<< endl;
        break;
        }
        else if (num==0)
        {
            cout << "no" << endl;
        }
    }
}
	return 0;
}
