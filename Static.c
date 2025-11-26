# include<stdio.h>
void counter();
main(){
	counter();
	counter();
	counter();
	counter();
}
void counter(){
	static int =0;
	x++;
	printf("%d\n",x);
}
