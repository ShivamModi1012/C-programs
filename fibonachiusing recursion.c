#include<stdio.h>
int fibo(int);
int main()
{int num,c,i=0;
printf("Enter a number upto which fibonachi series is required");
scanf("%d",&num);
for(c=1;c<=num;c++)
{
    printf("%d\n",fibo(i));
    i++;
}
}
int fibo(int num)
{if(num==0)
return 0;
else if(num==1)
    return 1;
else
    return(fibo(num-1)+fibo(num-2));
}
