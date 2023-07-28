//https://www.codechef.com/problems/WATERFLOW
#include <iostream>
using namespace std;

int main() {
	int T,initial,water,capacity,hours,final;
	cin >> T;

while(T--){
    cin >> initial >> capacity >> water >> hours;
    final = initial + (water * hours);

	if (final > capacity)
        cout <<"overFlow" << endl;
    else if (final < capacity  )
        cout <<"Unfilled" << endl;
    else 
        cout <<"filled" << endl;

}
	return 0;
}
