//https://www.codechef.com/problems/TABLET
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int n,b;
cin >> n>>b;
int w,h,c,area=0,flag=0;
    for (int i=0;i<n;i++){
    cin >> w >> h >> c;
        if (c<=b&& area<w*h){
            area=w*h;
            flag = 1;
        }
    }
    (flag==1)  ? cout<<area<<endl : cout<<"no tablet"<<endl;
}
	return 0;
}
