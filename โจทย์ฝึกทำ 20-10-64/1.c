#include <stdio.h>
main() {
	int i,num,x,Num[50];
	for(i=1;i<=50;i++){
		Num[i]=i;
	}
	printf("Please enter number: ");
	scanf("%d", &num);
	printf("The numbers can be divide by %d\n\n",num);
	x=0;
	for(i = 1; i <= 50; i++){
		if((Num[i]%num) == 0) {
			printf("%d ",Num[i]);
			x++;
		}
	}
	printf("\n\n");
	printf("total = %d",x);
	
}
