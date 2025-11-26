# include<stdio.h>
main(){
	char name[20];
	printf("Enter your name");
	scanf("%[^\n]s",&name);
	printf("My name is %s",name);
}
