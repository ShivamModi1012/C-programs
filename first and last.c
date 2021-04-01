#include<stdio.h>
int main()
{
    int n;
    printf("enter size of array");
    scanf("%d",&n);
    int arr[n],i,pos,pos1,num;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter number to be found");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {

           if(arr[i]==num)
           {
               pos=i;
               break;
           }

    }

     for(i=0;i<n;i++)
    {

           if(arr[i]==num)
           {
               pos1=i;
           }

    }
    printf("First occurance = %d\nLast occurance =%d",pos,pos1);

}
