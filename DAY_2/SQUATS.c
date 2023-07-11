//  https://www.codechef.com/problems/SQUATS
#include <stdio.h>

int main(void) {
	int T;
	scanf("%d",&T);
	while(T--){
	    int sets;
	    int squats=0;
	    scanf("%d",&sets);
	    squats=sets*15;
	    printf("%d\n",squats);
	}
	return 0;
}

