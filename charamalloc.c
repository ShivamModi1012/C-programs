#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
char *p1=NULL;
p1=(char*)calloc(6,sizeof(char));
*p1='hhhh';
printf("%s\n",*p1);
strcpy(p1,"Hello");
printf("%s\n",*p1);
}
