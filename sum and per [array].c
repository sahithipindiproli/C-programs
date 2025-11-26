//program to find sum and percentage of marks
#include<stdio.h>
main(){
	int i,marks[6],sum=0;
	int percentage;
	for(i=0;i<6;i++)
	{
		printf("Enter sub %d marks",i+1);
		scanf("%d",&marks[i]);
	}
	for(i=0;i<6;i++)
	{
		sum=sum+marks[i];
	}
	percentage=(sum/600.0)*100;
	printf("The total marks:%d\n",sum);
	printf("The percentage:%d",percentage);
}
