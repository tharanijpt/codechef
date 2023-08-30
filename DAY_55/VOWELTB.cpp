//https://www.codechef.com/problems/VOWELTB
#include <iostream>
using namespace std;

int main() {
char a;
cin >> a;
char vowel[5]={'A','E','I','O','U'};
int flag=0;

for (int i=0;i<5;i++){
    if (a == vowel[i]){
        flag=1;
        break;
    }
}
(flag==1) ? cout<<"Vowel"<<endl : cout<<"Consonant"<<endl;
	return 0;
}
