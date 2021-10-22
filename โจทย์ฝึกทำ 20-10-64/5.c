#include <stdio.h>
#include <string.h>
typedef struct {     //creat a struct 
    char name[40];
    int age;
}person;
int Scanner(person n[]){
	int i;
	for(i=1;i<=5;i++){
		printf("Student[%d]\n",i);
		printf("        name: ");
		scanf("%s",n[i].name);
		printf("        age: ");
		scanf("%d",&n[i].age);
	}
	return 0;
}
void Display(person n[]){
	int i;
	int age;
	printf("\n the age you want to search:");
	scanf("%d",&age);
	for(i=1;i<=5;i++){
		if(n[i].age>=age){
			printf("%s , %d \n",n[i].name,n[i].age);
		}
	}
}
main(){
	person list[5];
	Scanner(list);
	system("cls");
	Display(list);
	
}
