//https://www.codechef.com/problems/GDTURN
#include <stdio.h>

int main(void) {
    int dice1,dice2,sum,T;
    scanf("%d",&T);
    while(T!=0)
{
    scanf("%d %d",&dice1,&dice2);
    sum=dice1+dice2;
    if (sum>=7 && dice1<=6 && dice2<=6)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
        
    }
    T--;
}
    
	return 0;
}

