#include<stdio.h>
int main()
{
int num1,num2,a=0,i,gcd;
printf("enter two numbers whose GCD is required ");
scanf("%d%d",&num1,&num2);
if(num2>num1)
{
    a=num1;
    num1=num2;
    num2=a;
}
for(i=1;i<=num2 && i<=num2;i++)
{
    if(num1%i==0 && num2%i==0)
        gcd=i;
}
printf("the gcd of %d and %d is %d",num1,num2,gcd);
}
