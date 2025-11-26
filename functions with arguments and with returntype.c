# include<stdio.h>
int addition(int,int);
main(){
	int a,b,c;
	printf("Enter a&b values");
	scanf("%d %d",&a,&b);
	c= addition(a,b);
	printf("The result is %d",c);
}
int addition(int S, int M){

return S+M;
}
