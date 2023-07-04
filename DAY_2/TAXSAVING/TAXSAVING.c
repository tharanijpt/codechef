//https://www.codechef.com/problems/TAXSAVING
#include <stdio.h>

int main(void) {
int T;
scanf("%d",&T);
while(T--){
  int amount_earn, max_amount, invest;
  scanf("%d",&amount_earn);
  scanf("%d",&max_amount);
  invest=amount_earn - max_amount;
  printf("%d\n",invest);
  
}
	return 0;
}

