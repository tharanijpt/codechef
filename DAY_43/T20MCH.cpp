//https://www.codechef.com/problems/T20MCH
#include <iostream>
using namespace std;

int main() {
int a,over,b;
cin >> a >> over >>b;
int r_over=20-over;
int m_score=(r_over*6)*6;
(b+m_score>a) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
	return 0;
}
