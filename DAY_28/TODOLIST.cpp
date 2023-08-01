//https://www.codechef.com/problems/TODOLIST
#include <iostream>
using namespace std;

int main() {
	int T,sequence,total,i;
	cin >> T;
    
while(T--){
    cin >> sequence;
    int problems[sequence];
    for (i=0;i<sequence;i++){
        cin >> problems[i];
    
    if (problems[i]>=1000){
        total +=1;
    }
    
    }
    cout <<total << endl;
    total=0;
}
	return 0;
}
