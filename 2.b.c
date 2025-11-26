# include<stdio.h>
main(){
	char sen[100];
	printf("Enter a sentence");
	scanf("%[^\n]%*c",&sen);
	printf(sen);
}
