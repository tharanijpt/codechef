//https://www.codechef.com/problems/AIRLINES
#include <iostream>
using namespace std;

int main() {
    
	int T,capacity,people,charges;
	cin >> T;
while(T--){
    
    cin >> capacity >> people >> charges;
    int total_capacity = capacity*10;
    
        if (people<total_capacity){
            cout << people * charges<< endl;
        }
        else 
            cout <<total_capacity * charges<< endl;
        }
    	return 0;
}
