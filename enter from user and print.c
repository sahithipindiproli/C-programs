# include<stdio.h>
main(){
	int i,marks[6];
	printf("Enter array elements");
	for(i=0;i<6;i++)
	{
		scanf("%d",&marks[i]);
	}
	printf("The array elements are:\n");
	for(i=0;i<6;i++)
	{
		printf("%d\t",marks[i]);
	}
}
