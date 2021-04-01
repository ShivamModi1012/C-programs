void main()
{
    int a[5];
    int n=5;
    int i;
        
    printf("Enter the values:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
        
    printf("*******OUTPUT********\n");
    i=0;
        
    for (i=0; i< n-1; i++) {
        if ((a[i+1] == a[i]+1) || (a[i+1] == a[i]-1)) {
        }
        else
        {
            printf("0\n");
            return 0;
        }
    }
        
    printf("1\n");
}
