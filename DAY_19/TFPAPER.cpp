//https://www.codechef.com/problems/TFPAPER
#include <iostream>
using namespace std;

int main() {
	int T,total_qn,alice_mark;
	cin >> T;
while(T--){
    cin >> total_qn >> alice_mark;
    int bob_mark = total_qn -alice_mark;
    cout <<bob_mark<< endl;
}
	return 0;
}
