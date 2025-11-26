# include<stdio.h>
main(){
	char s1[20],s2[20];
	int i,j,len=0;
	printf("Enter string 1");
	gets(s1);
	printf("Enter string2");
	gets(s2);
	for(i=0;s1[i]!='\0';i=i+1)
	{
		len=len+1;
	}
	for(j=0;s2[j]!='\0';j++,len=len+1)
	{
		s1[len]=s2[j];
	}
	s2[len]='\0';
	printf("The concatenated string is %s",s1);
	
}
