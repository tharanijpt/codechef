//https://www.codechef.com/problems/BOOKPACK
#include <iostream>
#include<cmath>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
float books,box;
int shelf;
cin >> shelf >> books >> box;
int need = ceil(books/box);
cout <<shelf*need << endl;
}
	return 0;
}
