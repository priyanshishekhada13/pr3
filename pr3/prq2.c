#include<stdio.h>

void main()
{
	char n , i ;

	i='a';
	
	do
	{
		printf("%c",i);
		
		i+=4;	
	}
	while(i<='z');

}