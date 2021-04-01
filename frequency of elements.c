#include<stdio.h>
int main()
{
    int n;
    printf("enter size of array");
    scanf("%d",&n);
    int arr[n],i,freq[n],count,j;
    printf("enter elements of array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        freq[i]=-1;
    }
    for(i=0;i<n;i++)
    {
        count=1;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]==arr[i])
                {count++;
                freq[j]=0;}
        }
        if(freq[i]!=0)
            freq[i]=count;}
         for(i=0;i<n;i++)
        {if(freq[i]!=0)
            printf("%d occurs %d times\n",arr[i],freq[i]);

}
}
