#include<stdio.h>
void incr(int);
main()
{ 
	int a=7;
	incr(a);
	printf("%d",a);
}
void incr(int a)
{
	a++;
}
