//https://www.codechef.com/problems/DETSCORE
#include <iostream>
using namespace std;

int main() {
	int T,points,solved;
cin >> T;
while(T--){
    cin>> points>>solved;
    int each= points/10;
    int total= each*solved;
    cout<< total<< endl;
}
	return 0;
}


