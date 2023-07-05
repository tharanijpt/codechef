//https://www.codechef.com/problems/TOP10
#include <stdio.h>
int main(void) {
int T,rank;
scanf("%d",&T);
while(T--){
    scanf("%d",&rank);
    (rank<=10) ?printf("YES\n"): printf("NO\n");
    }
	return 0;
}

