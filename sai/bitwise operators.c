#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g,h,i;
	printf("enter one integer value= ");
	scanf("%d",&a);
	printf("enter one integer value= ");
	scanf("%d",&b);
	c=a&b;
	e=a|b;
	d=a^b;
	f=~a;
	g=~b;
	h=a<<2;
	i=b>>2;
	printf("a&b = %d\n",c);
	printf("a|b = %d\n",e);
	printf("a^b = %d\n",d);
	printf("~a,~b = %d,%d\n",f,g);
	printf("a<<2 = %d\n",h);
	printf("b>>2 = %d\n",i);
return 0;
}
