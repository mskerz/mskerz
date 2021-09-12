#include <stdio.h>
#include <string.h>

typedef struct {     //creat a struct
    char name[50];
    char nickname[30];
    int age;
    char email[30];
}person;  2 //creat  a object var struct
int receive(person data[]);   //creat a prototype fucntion   return type =int
void display(person data[]);  // creat a prototype fucntion   no return type or void
main(){
    person fs_list[5]; //creat a var name'fs_list[5]' have field like person
    receive(fs_list);//call receive function and paramiters is fs_list
    system("cls");
    display(fs_list);//call receive function and paramiters is fs_list
}
int receive(person data[]){    //creat a function  receive(person data[])  ***for input person data
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

void display(person data[]){  //creat a function  display(person data[])  ***for output person data
    int i;
    printf("              << F R I E N D S H I P >>      \n");
    printf("------------------------------------------------------------------\n");
    printf("Seq.     ");
    printf("Name    ");
    printf("Nickname        ");
    printf("Age    ");
    printf("E-mail \n");
    for(i=0;i<5;i++){
        printf(" %d.  %-11s  %-11s %-12d %-10s \n ",i+1,data[i].name,data[i].nickname,data[i].age,data[i].email);
    }
    printf("------------------------------------------------------------------\n");
} 