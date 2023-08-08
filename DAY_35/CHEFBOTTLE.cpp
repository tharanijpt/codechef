//https://www.codechef.com/problems/CHEFBOTTLE
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int bottle,capacity,tank;
cin >> bottle >> capacity >> tank;
if (bottle > tank / capacity)
    cout << tank / capacity<< endl;
else 
    cout <<bottle << endl;

}
	return 0;
}
