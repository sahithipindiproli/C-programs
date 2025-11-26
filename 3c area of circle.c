 # include<stdio.h>
# define pi 3.14
int main(){
float radius,Area;
printf("Enter radius:");
scanf("%f",&radius);
Area = pi*radius*radius;
printf("The area of circle is %.2f",Area);
return 0;
}
