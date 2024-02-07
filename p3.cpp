#include<stdio.h>
void incr(int *);
main()
{ 
	int a=7;
	incr(&a);
	printf("%d",a);
	return 0;
}
void incr(int *p)
{
	(*p)++;
}
