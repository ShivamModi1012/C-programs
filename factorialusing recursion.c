#include<stdio.h>
int factorial(int);
int main()
{int num,a;
printf("Enter a number whose factorial is required");
scanf("%d",&num);
a=factorial(num);
printf("The factorial of %d is %d",num,a);
}
int factorial(int num)
{if(num==1)
return 1;
return num*factorial(num-1);
}
