#include<stdio.h>
void addition(int,int);
main(){
	int a,b;
	printf("Enter a&b values");
	scanf("%d %d",&a,&b);
	addition(a,b);
	addition(13,12);
	addition(234456,1234);
}
void addition(int p,int q)
{
	int result;
	result=p+q;
	printf("The result is %d\n",result);
}
