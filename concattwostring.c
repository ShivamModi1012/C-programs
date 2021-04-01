#include<stdio.h>
int main()
{
char a[100],b[100],c[100];
gets(a);
gets(b);
int count=0,count1=0,i=0;
while(a[i++]!='\0'){
    //printf("\"%c\"",c[i]);
count++;}
//printf("\n%d",count);
int j=0;
while(b[j++]!='\0'){
    //printf("\"%c\"",c[i]);
count1++;}
//printf("\n%d\n",count1);
for(i=0;i<(count);i++)
c[i]=a[i];
for(j=0;j<count1;j++)
c[j+count]=b[j];
puts(c);
}
