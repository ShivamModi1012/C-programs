#include<stdio.h>
int hcf(int,int);
int main()
{
int num1,num2,a=0,gcd;
printf("enter two numbers whose GCD is required ");
scanf("%d%d",&num1,&num2);
if(num2>num1)
{
    a=num1;
    num1=num2;
    num2=a;
}
gcd=hcf(num1,num2);
printf("GCD of %d and %d is %d",num1,num2,gcd);
}
int hcf(int num1,int num2)
{
    if(num2!=0)
        return hcf(num2,num1%num2);
    else
        return num1;
}

