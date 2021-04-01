#include<stdio.h>
#include<stdlib.h>
void sort(int *ptr,int n,int(*comp)(const void *,const void *))
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(comp(&ptr[j],(&ptr[j+1]))<0)
            {
                temp=ptr[j];
                ptr[j]=ptr[j+1];
                ptr[j+1]=temp;
            }
        }
    }
}
int comp_a(int const *a,int const *b)
{
    return((*b)-(*a));
}
int comp_d(int const *a,int const *b)
{
    return ((*a)-(*b));
}
int main()
{
    printf("Enter number of elements in array\n");
    int num,i,j,ch;
    scanf("%d",&num);
    int *ptr;
    ptr=(int*)malloc(num*sizeof(int));
    for(i=0;i<num;i++)
        scanf("%d",&ptr[i]);
    printf("Enter 1. to sort the given array in ascending order.\nEnter 2. to sort the given array in descending order.\n");
    scanf("%d",&ch);
    switch(ch)
        {
        case 1:
            sort(ptr,num,comp_a);
            break;
        case 2:
            sort(ptr,num,comp_d);
            break;
        default:
            printf("Enter a valid input!!");
        }
        for(i=0;i<num;i++)
            printf("%d,",ptr[i]);
        return 0;
}
