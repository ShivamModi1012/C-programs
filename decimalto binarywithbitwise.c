#include<stdio.h>
int main()
{
    int a,b=0,c;
    printf("enter a number");
    scanf("%d",&a);
    c=;
    while(c--)
    {
        b=(b*10)+(a&1);
    }
    printf("%d in binary format is %d",a,b);
}
