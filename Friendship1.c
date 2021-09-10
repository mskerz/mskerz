#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    char nickname[30];
    int age;
    char email[30];
}person;
int receive(person data[]);
void display(person data[]);
 main(){
    person fs_list[5];
    receive(fs_list);
    system("cls");
    display(fs_list);
}
int receive(person data[]){
	int i;
	for(i=0;i<5;i++){
		printf("Name: ");
		scanf("%s",data[i].name);
		printf("Nickname:");
		scanf("%s",data[i].nickname);
		printf("Age:");
		scanf("%d",&data[i].age);
		printf("E-mail:");
		scanf("%s",data[i].email);
		printf("\n\n");
	}
	return 0;
}

void display(person data[]){
  	int i;
  	printf("         << F R I E N D S H I P >>      \n");
  	printf("-----------------------------------\n");
	printf("Seq.     ");
	printf("Name    ");
	printf("Nickname        ");
	printf("Age    ");
	printf("E-mail \n");
	for(i=0;i<5;i++){
		printf(" %d. %-10s %-10s %-10d %-10s \n ",i+1,data[i].name,data[i].nickname,data[i].age,data[i].email);  
 	}
	//printf("-----------------------------------");
} 
