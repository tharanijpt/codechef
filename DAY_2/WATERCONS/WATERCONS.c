//https://www.codechef.com/problems/WATERCONS
#include <stdio.h>

int main(void) {
	int T;
scanf("%d",&T);
int water;
while(T--)
    {
        scanf("%d",&water);
        if (water>=2000)
            printf("YES\n");
        else
            printf("NO\n");
            
    }
	return 0;
}

