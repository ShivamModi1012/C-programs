#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
char *p1;
p1=(char *)malloc(sizeof(char)*5);
*p1='shivam';
printf("%s\n",*p1);
strcpy(p1,"Hello");
printf("%s\n",*p1);
}
