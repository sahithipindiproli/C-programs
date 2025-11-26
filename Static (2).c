# include<stdio.h>
void counter();
main(){
	counter();
	counter();
	counter();
	
}
void counter(){
	static int x =2;
	x++;
	printf("%d\n",x);
}
