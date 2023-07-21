//https://www.codechef.com/problems/SEMCOURSES
#include <iostream>
using namespace std;

int main() {
	int T,course,unit,chapters;
	cin >> T;
while(T--){
    cin >> course >> unit >> chapters;
    cout << course*unit*chapters<< endl;
}
	return 0;
}
