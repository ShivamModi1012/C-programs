#include<stdio.h>
int main()
{
    int num,last,rem=0;
    printf("enter a number\n");
    scanf("%d",&num);
    int a,b;
    a=num&1;
    b=1<<(sizeof(int)*8)-1;
    b=(num&b)?1:0;
    printf("The least significant bit is %d\nThe most significant bit is %d\n",a,b);
    int n;
    scanf("%d",&n);
    b=1<<n;
    num^=b;
    if(num&b)
        printf("\n1");
    else
        printf("\n0");
}
