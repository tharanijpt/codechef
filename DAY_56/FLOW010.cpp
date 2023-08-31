//https://www.codechef.com/problems/FLOW010
#include <iostream>
#include <cctype>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
    char a;
    cin >> a;
    a = toupper(a);
        switch(a){
            case('B'):
                cout <<"BattleShip"<< endl;   
                break;
            case('C'):
                cout <<"Cruiser"<< endl;   
                break;
            case('D'):
                cout <<"Destroyer"<< endl;   
                break;
            case('F'):
                cout <<"Frigate"<< endl;   
                break;
                
        }
}
	return 0;
}
