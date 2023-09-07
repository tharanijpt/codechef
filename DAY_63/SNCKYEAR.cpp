//https://www.codechef.com/problems/SNCKYEAR
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
    int host[5]={ 2010, 2015, 2016, 2017, 2019};

while(T--){
    int year;
    cin >> year;
    int flag=0;
    
    for (int i=0;i<5;i++){
        if (year == host[i]){
            flag=1;
        }
    }
    (flag==1) ? cout<<"HOSTED"<<endl : cout<<"NOT HOSTED"<<endl;
}
	return 0;
}
