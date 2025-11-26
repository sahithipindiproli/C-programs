// F.simple intrest and compound intrest
#include<stdio.h>
#include<math.h>
main(){
float p,t,r,si,ci;
printf("Enter principle amount:");
scanf("%f",&p);

printf("Enter time:");
scanf("%f",&t);

printf("Enter rate of intrest:");
scanf("%f",&r);

si=p*t*r/100;
ci=p*pow(1+r/100,t)-p;
printf("The simple intrest is %3.f\n",si);
printf("The compound intrest is %3.f\n",ci);
}
