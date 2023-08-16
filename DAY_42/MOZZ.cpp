//https://www.codechef.com/problems/MOZZ
#include <iostream>
#include <cmath>
using namespace std;


int main() {
	int T;
	cin >> T;

while(T--){
float sticks,per_plate,reward;
cin >> sticks >> per_plate >> reward;
float extra = reward/30;
float total_sticks = sticks + extra;
cout << ceil(total_sticks/per_plate)<< endl;
}
	return 0;
}
