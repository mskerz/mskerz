#include <stdio.h>
main(){
	int i,num[10],nums;
	for(i=1;i<=10;i++){
		printf("Enter Number %d: ",i);
		scanf("%d",&num[i]);
	}
	printf("What number would you like to search: ");
	scanf("%d",&nums);
	printf("-------------------------------------------\n");

	for(i=1;i<=10;i++){
		if(nums==num[i]){
			printf("Found Number:%d at Position %d\n",nums,i);
		}
		
	}if(nums!=num[i]){
			printf("Number not Found!");
	}
}
