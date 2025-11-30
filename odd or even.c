# include <stdio.h>
int main(){
	int Number;
	printf("Enter the Number:");
	scanf("%d",&Number);
	if(Number%2==0){
		printf("THE NUMBER %d IS EVEN",Number);
	}else{
		printf("THE NUMBER %d IS ODD",Number);
	}
}
