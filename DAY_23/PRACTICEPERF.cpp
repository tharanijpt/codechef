//https://www.codechef.com/problems/PRACTICEPERF
#include <iostream>
using namespace std;

int main() {
int i,count=0,arr[4];

for (i=0;i<4;i++)
{
    cin >> arr[i];
    if (arr[i]>=10){
        count++;}
}
cout << count<< endl;
	return 0;
}


}
