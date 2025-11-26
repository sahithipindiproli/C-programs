# include<stdio.h>
main(){
	float u,t,a,d;
	printf("Enter initial velocity");
	scanf("%f",&u);
	
	printf("Enter acceleration");
	scanf("%f",&a);
	
	printf("Enter time");
	scanf("%f",&t);
	d=u*t+0.5*a*t*t;
	printf("The distance is %f",d);
}
