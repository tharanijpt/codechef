//https://www.codechef.com/problems/TRAVELFAST
#include <iostream>
using namespace std;

int main() {
	int T,bike,car;
	cin >> T;

while(T--){
    cin >> bike >> car ;
    	 if (bike>car)
        cout <<"car" << endl;
    else if (car> bike )
        cout <<"bike" << endl;
    else 
        cout <<"same" << endl;

}
	return 0;
}
