#include<stdio.h>
int main()
{
	int a[100],b[100],c[100],i,n,m,p;
	printf("enter number of elements in array");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	p=m=0;
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
				b[m]=a[i];
				m++;
		}
		else
		{
				c[p]=a[i];
				p++;
		}
	}
	for(i=0;i<m;i++)
	{
		printf("%d, ",b[i]);
		//printf("\n");
		//printf("%d, ",c[i]);
	}
	printf("\n");
	for(i=0;i<p;i++)
	{
		printf("%d, ",c[i]);
		//printf("\n");
		//printf("%d, ",c[i]);
	}
	return 0;
}
