#include<stdio.h>
#include<stdlib.h>
int main()
{
char *p1;
char *p2;
p1=(char *)calloc(5,sizeof(char));
p2=(char *)malloc(sizeof(char)*5);
printf("%s\n",*p1);
strcpy(p1,"Hello");
printf("%s\n",p1);
*p2=Shivam;
printf("%s\n",p2);
}
