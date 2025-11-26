#include<stdio.h>
main(){
	float ctemp,ftemp;
	printf("Enter temp in celsicus");
	scanf("%f",&ctemp);
	ftemp=1.8*ctemp+32;
	printf("The temp in fahrenheit is %f",ftemp);
}
