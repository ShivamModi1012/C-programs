#include<stdio.h>
char capital(char [],int);
int main()
{
    char ch[100];
    printf("enter a string\n");
    gets(ch);
    for(int i=0;ch[i]!='\0';i++)
    capital(ch,i);
}
char capital(char ch[],int j)
{
static int i=0;
if(i<j)
       {if(ch[i]>='A'&&ch[i]<='Z')
            printf("%c, ",ch[i]);i++;
            capital(ch,j);
}
}
