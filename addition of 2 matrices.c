//program to add 2 matrices
#include<stdio.h>
main(){
int a[2][2],b[2][2],c[2][2];
int i,j;
printf("Enter 4 elements of a matrix a");
for(i=0;i<=1;i++)
{
	for(j=0;j<=1;j++)
	{
		scanf("%d",&a[i][j]);
	}
}
printf("Enter 4 elements of matrix b");
for(i=0;i<=1;i++)
{
	for(j=0;j<=1;j++)
	{
		scanf("%d",&b[i][j]);
	}
}
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++){
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("The Addition of 2 matrices");
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\t");
	}
}

