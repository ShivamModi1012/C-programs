#include<stdio.h>
int main()
{
	int a[100],n,i,pos;
	printf("Enter the number of elemrnts in array");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the pos from where element is to be deleted");
	scanf("%d",&pos);
	for(i=pos-1;i<n;i++)
	{
	  a[i]=a[i+1];	
	}
	n--;
	for(i=0;i<n;i++)
	{
		printf("%d, ",a[i]);
	}
}
