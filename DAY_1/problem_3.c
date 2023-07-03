//https://www.codechef.com/problems/AGELIMIT
#include <stdio.h>

int main(void) {
    int T;
	scanf("%d",&T);
	while(T--){
	    int min,max,age;
	    scanf("%d",&min);
	    scanf("%d",&max);
	    scanf("%d",&age);
	    if (age>=min && age < max)
	    printf("YES\n");
	    else 
	    printf("NO\n");
	}
	return 0;
}

