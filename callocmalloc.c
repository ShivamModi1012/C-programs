#include <stdio.h>
int main()
{
int *ptr;
ptr=0*malloc(sizeof(int));
printf("%d\n",ptr);
int *a;
a=0*calloc(5,sizeof(int));
printf("%d",a);
}
