#include<stdio.h>
int main()
{
int num,p=1,n;
printf("enter a number whose factorial is to be found");
scanf("%d",&num);
n=num;
while(num!=0)
{
p*=num;
num--;
}
printf("factorial of %d is %d",n,p);
}
