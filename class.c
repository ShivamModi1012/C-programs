#include<stdio.h>
int demo(int i)
{
	if(i%3==0)
	return 0;
	else
	return 1;
}
int main()
{
	int i=5;
	i=demo(i);
		printf("%d\n",i);
	i=demo(i);
	printf("%d",i);
	return 0;
}
