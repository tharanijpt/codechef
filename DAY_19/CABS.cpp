//https://www.codechef.com/problems/CABS
#include <iostream>
using namespace std;

int main() {
	int T,first_cab,second_cab;
	cin >> T;
while(T--){
    cin >> first_cab >> second_cab;
    	 if (first_cab > second_cab)
            cout <<"second" << endl;
            
        else if ( first_cab < second_cab)
            cout <<"first" << endl;
            
        else 
            cout <<"any" << endl;

}
	return 0;
}
