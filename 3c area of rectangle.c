# include<stdio.h>
int main(){
	float length,breadth,Area;
	printf("Enter the values:");
	scanf("%f %f",&length,&breadth);
	Area=length*breadth;
	printf("The area of rectangle is %.2f",Area);
	return 0;
}
