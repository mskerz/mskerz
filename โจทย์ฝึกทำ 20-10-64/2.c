#include <stdio.h>
//#include <stdlib.h>
main(){
	int i,num[10];
	
	for(i=1;i<=10;i++){
		printf("Enter Number %d: ",i);
		scanf("%d",&num[i]);
	}
	/*printf(" random number:" );
	for(i=1;i<=10;i++){
		num[i]=rand()%100;
		printf("%d ",num[i]);
		
	}*/
	printf("\n\n");
	printf("Even Number:  ");
	for(i=1;i<=10;i++){
		if(num[i]%2==0){
			printf("%d ",num[i]);
		}	
	}printf("\n\n");
	printf("Odd Number:  ");
	for(i=1;i<=10;i++){
		if(num[i]%2==1){
			printf("%d ",num[i]);
		}	
	}
	
}
