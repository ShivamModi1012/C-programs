#include<stdio.h>
int main()
{
	int a[100],n,i,j,k;
	printf("enter number of elements in array");
	scanf("%d",&n);
	printf("enter %d number of elements",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(k=0;k<n-1;k++)
	{
		for(i=0;i<n-k-1;i++)
		{
		   if(a[i]>a[i+1])
			{
		     	j=a[i];
				a[i]=a[i+1];
				a[i+1]=j;
		   }
		}
	}
	printf("array after sorting is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d, ",a[i]);
	}
}
