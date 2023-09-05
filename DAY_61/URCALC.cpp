//https://www.codechef.com/problems/URCALC
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
double a ,b;
cin >> a >> b;
char op;
cin >> op;

switch(op){
    case '+':
    cout <<a+b << endl;
    break;
    
    case '-' :
    cout <<a-b << endl;
    break;
    
    case '*' :
    cout <<a*b << endl;
    break;
    
    case '/':
    if (b!=0)
    cout << fixed << setprecision(7)<< (a/b) << endl;
    else
    cout <<0<< endl;
    break;
    
    
}
	return 0;
}
