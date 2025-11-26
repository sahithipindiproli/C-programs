# include<stdio.h>
int x=10;
void display();
main(){
	int y=20;
	printf("The value of x is %d\n",x);
	printf("The value of y is %d\n",y);
	
	 display();
}
void display(){
	int z=30;
	printf("The value of x is %d\n",x);
	
	printf("The value of z is %d",z);
}
