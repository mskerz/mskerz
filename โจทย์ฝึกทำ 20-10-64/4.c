#include  <stdio.h>
#include  <string.h>
typedef struct{
	char book_name[40];
	float book_price;
}details;
main(){
	int i;
	float discount[5];
	details prod[5];
	for(i=1;i<=5;i++){
		printf("Please enter the book name: ");
		scanf("%s",prod[i].book_name);
		printf("Please enter the book price: ");
		scanf("%f",&prod[i].book_price);
		printf("\n\n");
	}
	for(i=1;i<=5;i++){
		discount[i]=prod[i].book_price*10/100;  //100% =1  10%=0.1
		printf("\nBook        :             %s\n",prod[i].book_name);
		printf("Price       :             %.2f Baht\n",prod[i].book_price);
		printf("Discount 10 % :             %.2f Baht\n",discount[i]);
		printf("Total Price :             %.2f Baht \n",prod[i].book_price-discount[i]);
	}
	
	
}
