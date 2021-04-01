#include<stdio.h>
#include<string.h>
int main()
{
    char str[10][100],temps[50];
    int n,i,j;
    printf("Enter number of strings you want to enter");
    scanf("%d",&n);
    printf("Enter %d number of strings",n);
    for(i=0;i<=n;i++)
    fgets(str[i],sizeof(str[i]),stdin);

   for(i=0;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(strcmp(str[i],str[j])>0)
            {
                strcpy(temps,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temps);
            }
        }
    }
    for(i=0;i<=n;i++)
        fputs(str[i],stdout);
}

