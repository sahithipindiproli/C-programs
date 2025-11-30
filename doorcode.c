# include<stdio.h>
int main(){
	int doorcode;
	printf("Enter the doorcode:");
	scanf("%d",&doorcode);
	if(doorcode==10234){
		printf("correct code\nTHE DOOR IS NOW OPENED");
	}else{
	printf("wrong code\nTHE DOOR REMAINS CLOSED");	               //nenu door open ki code rasa......
	}
	
}
