//https://www.codechef.com/problems/ECOCLASS
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int n,total=0;
cin >> n;
int supply[n],demand[n];

for (int i=0;i<n;i++){
    cin >> supply[i];
}
for (int i=0;i<n;i++){
    cin >> demand[i];
}
for (int i=0;i<n;i++){
    if (supply[i]==demand[i]){
    total++;}
}
cout <<total << endl;
}
	return 0;
}
