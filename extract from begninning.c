#include<stdio.h>
#include<math.h>
int main()
{
int num,i,j,first,left,number=0,d,e;
printf("enter a number");
scanf("%d",&num);
d=log10(num);

printf("Number of digits in %d is %d\n",num,d);
while(num!=0)
{
    printf("%d",num);
    e=pow(10,d);
    left=num%e;
    printf("%d\n the left number is",left);
    first=num/e;
    printf("%d\n the first number is",first);
    number=number*10+first;
    printf("%d\n the number is",number);
    --d;
    num=left;
}printf("\n%d is the number",number);
}

