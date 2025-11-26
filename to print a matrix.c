# include<stdio.h>
main(){
int matrix[2][3]={{7,8,9},{6,8,9}};
int i,j;
printf("The matrix is:\n");
for(i=0;i<=1;i++)
{
	for(j=0;j<=2;j++){
		printf("%d\t",matrix[i][j]);
	}
	printf("\n");
	}	
}
