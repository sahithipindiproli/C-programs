# include<stdio.h>
main(){
	int yr;
	printf("Enter the year");
	scanf("%d",&yr);
	if(yr%4==0&&(yr%100!=0||yr%400==0))
	printf("leap yrar");
	else 
	printf("Not a leap year");
}
		
