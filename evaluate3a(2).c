# include<stdio.h>
int main(){
	int i,j;
	printf("Enter the number");
	scanf("%d",&i);
	j=(i++)+(++i);
	printf("The answer is %d",j);
	return 0;
}
