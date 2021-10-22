	
#include <stdio.h>
main() {
	int i,num,x,Num[50];
	for(i=1;i<=50;i++){
		Num[i]=i;
	}
	printf("Please enter number: ");
	scanf("%d", &num);
	printf("The numbers can be divide by %d\n\n",num);
	if(num==0){
			printf("Can't Divide by Zero 0 !!!'");
	}
	x=0;
	for(i = 1; i <= 50; i++){
		if((Num[i]%num) == 0) {
			printf(" %d ", Num[i]);
			x++;
		}
	}
	printf("\n\n");
	int n;
	for(i=1;i<=x;i++){
		if(x>n){
			n=x-1;
		}
		
	}
	printf("total = %d",n);
}
