# include<stdio.h>
int x=10;                                        //global variable
void display();
main(){
	int y=20;                                  //local variable
	printf("The value of x is %d",x);             
	printf("The value of y is %d",y);
	printf("The value of z is %d",z);           //error
	printf display();
}
void display(){
	int z=30;                                   //local variable
	printf("The value of x is %d",x);
	printf("The value of y is %d",y);             //error
	printf("The value of z is %d",z);     
	
	
}
