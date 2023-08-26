//https://www.codechef.com/problems/FLOW011
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
float base,final=0;
cin >> base;
if (base<1500){
    final= base*2;}
else 
    final = base + 500 + base*0.98;
cout <<fixed << setprecision(2) << final << endl;
}
	return 0;
}
