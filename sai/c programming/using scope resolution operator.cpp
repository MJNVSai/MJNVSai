#include<stdio.h>
void bey();
int a=9;
int main()
{
	bey();
return 0;
}
void bey()
{
	int i;
	printf("enter any one value= ");
	scanf("%d",&i);
	printf("value of i is :%d\n",i);
	printf("value of a is :%d",::a);
}
