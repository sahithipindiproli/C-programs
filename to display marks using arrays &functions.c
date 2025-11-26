# include<stdio.h>
void display(int marks[]);
main(){
	int marks[]={98,90,87,56,90};
	display(marks);
}
void display(int marks[])
{
	int i;
	printf("The marks are:\n");
	for(i=0;i<5;i++){
		printf("%d\n",marks[i]);
	}
}
