#include<stdio.h>
int main()
{
int a=0,i,n;
printf("enter a number");
scanf("%d",&n);
for(i=2;i<n;i++)
{
if(n%i==0)
{
if(i>a)
a=i;
}
}
printf("%d",a);
}
