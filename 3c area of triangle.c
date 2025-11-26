# include<stdio.h>
int main (){
	float base,height,Area;
	printf("Enter the values");
	scanf("%f %f",&base,&height);
	Area=0.5*base*height;
	printf("The area of triangle is %.2f",Area);
	return 0;
}
