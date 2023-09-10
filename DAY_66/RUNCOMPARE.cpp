//https://www.codechef.com/problems/RUNCOMPARE
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
    
int n,h=0;
cin >>n;

int alice[n];
int bob[n];

for (int i=0;i<n;i++){
    cin >> alice[i];
}
for (int i=0;i<n;i++){
    cin >> bob[i];
}
for (int i=0;i<n;i++){
    if ((abs(alice[i]-bob[i])) <= (min(alice[i],bob[i]))){
    h++;}
}
cout <<h<< endl;
}
	return 0;
}
