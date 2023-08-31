//https://www.codechef.com/problems/BMI
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

while(T--){
int h,m;
cin >> m >> h;
int bmi = m/(h*h);

    if (bmi<=18)
        cout <<"1" << endl;
    else if (bmi>=19 && bmi<=24 )
        cout <<"2" << endl;
    else if (bmi>=25 && bmi<=29)
        cout <<"3" << endl;
    else 
        cout <<"4"<< endl;
}
	return 0;
}
