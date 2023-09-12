//https://www.codechef.com/problems/CCOOK
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int arr[5],sum=0;
for (int i=0;i<5;i++){
    cin >> arr[i];
    sum+=arr[i];
}

if (sum==0)
    cout <<"Beginner" << endl;
else if (sum==2 )
    cout <<"Middle Developer" << endl;
else if (sum==3 )
    cout <<"Senior Developer" << endl;
else if (sum==4 )
    cout <<"Hacker" << endl;
else if (sum==5 )
cout <<"Jeff Dean" << endl;
else 
cout <<"Junior Developer" << endl;

}
	return 0;
}
