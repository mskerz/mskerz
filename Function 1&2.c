#include <stdio.h>
#include <math.h>
int get_Fx(int a){     /////1 ฟังก์ชั่น f(x)
	int fx;
	printf("enter x:");
	scanf("%d",&a);
	if(a<0){
		printf("condition 1\n");
		fx=3*pow(a,2)+2*a+7;
		return fx;                        // return fx ไปในทุกๆเงื่อนไข  เพื่อส่งค่ากลับไปยัง parametersของฟังก์ชั่น get_Fx             
	} 
	if(a==0){
		printf("condition 2\n");
		fx=0;
		return fx;
	}
	else if(a>0){
		printf("condition 3\n");
		fx=a-2;
		return fx;
	}
	
}
int Get_Fxy(int a,int b){    ///// 2 ฟังก์ชั่น f(x,y)
	int f_xy;
	printf("enter x:");
	scanf("%d",&a);
	printf("enter y:");
	scanf("%d",&b);
	if(a+b>0){
		printf("condition 1\n");  
		f_xy=a+b;
		return f_xy;                      // return f_xy ไปในทุกๆเงื่อนไข  เพื่อส่งค่ากลับไปยัง parametersของฟังก์ชั่น  Get_Fxy
	}
	if(a+b==0){
		printf("condition 2\n");
		f_xy=0;
		return f_xy;
	}
	else if(a+b<0){
		printf("condition 3\n");
		f_xy=(-a)+b;
		return f_xy;
	}
}
main(){
	int x,y;
	//printf("f(x)=%d",get_Fx(x));    //1 
	printf("f(x,y)=%d",Get_Fxy(x,y));   //2
}

