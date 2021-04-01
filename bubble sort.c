#include<stdio.h>
int main()
{
	int a[100],n,i,pos,num;
	printf("enter the number of elements in array");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter number to be inserted in the array and its position");
	scanf("%d%d",&num,&pos);
	for(i=num;i>pos-1;i--)
	{
		a[i]=a[i-1];
	}
	a[pos-1]=num;
	n++;
    for(i=0;i<n;i++)
    {
	 printf("%d, ",a[i]);
}
}
