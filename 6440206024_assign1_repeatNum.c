#include <stdio.h>
#include <conio.h>

void main(){
	int val[10];   
	char a[10] = "##########";  
	int i,total;
	printf("First \n");
	for (i=0; i<10; i++){
		printf("Input value [%d] = ", i+1);
		scanf("%d", &val[i]); 
		if(a[val[i]]=='#') 
			a[val[i]] = '1'; 
		else
			a[val[i]] = '!'; 
	}
	printf("Last \n");
	for (i=0; i<10; i++){
		printf("Input value [%d] = ", i+1);
		scanf("%d", &val[i]); 
		if(a[val[i]]=='#') 
			a[val[i]] = '1'; 
		else
			a[val[i]] = '!'; 
	}
	for(i=0; i<10; i++){
		if(a[i]=='!')
			printf("%d ", i);
	}
	printf("\n total = ");
	
}
