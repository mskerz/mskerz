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
		}/*else if(nums!=num[0]&&nums!=num[1]&&nums!=num[2]&&nums!=num[3]&&nums!=num[4]&&nums!=num[5]&&nums!=num[6]&&nums!=num[7]&&nums!=num[8]&&nums!=num[9]){
			printf("not Found!");*/
		
	}if(nums!=num[i]){
			printf("Number not Found!");
	}
}
