//https://www.codechef.com/problems/CUTOFF
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int total, p;
cin >> total >> p;
int pass[total];
for (int i=0; i<total;i++){
    cin >> pass[i];
}

sort(pass, pass + total);
cout << pass[(total-p)] -1<< endl;
    
}


	return 0;
}
