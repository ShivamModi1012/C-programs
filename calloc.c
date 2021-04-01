#include<stdio.h>
#include<stdlib.h>
int main()
{
int *ptr;
ptr=(int *)malloc(sizeof(int));
int a=7;
ptr=&a;
printf("%d",*ptr);
}
