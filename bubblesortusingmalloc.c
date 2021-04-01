#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter number of elements in the array");
    scanf("%d",&n);
    int *ptr;
    ptr=(int*)malloc(sizeof(int)*n);
    int i,j,temp;
    for(i=0;i<n;i++)
        scanf("%d",&ptr[i]);
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(ptr[j]>ptr[j+1])
               {
                 temp=ptr[j];
                    ptr[j]=ptr[j+1];
            ptr[j+1]=temp;
               }
        }
    }
    for(i=0;i<n;i++)
        printf("%d, ",ptr[i]);
}
