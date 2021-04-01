#include<stdio.h>
float add(int a,int b)
{
    return (a+b);
}
float subtract(int a,int b)
{
    return(a-b);
}
float multiply(int a,int b)
{
    return(a*b);
}
float division(int a,int b)
{
    return((float)a/b);
}
int main()
{
    float (*ptr)(int,int);
    int a,b,o;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    printf("\nEnter 1. for addition.\nEnter 2. for Subtraction.\nEnter 3. for Multiplication.\nEnter 4.for Division\n");
    scanf("%d",&o);
    switch(o)
    {
    case 1:
        ptr=&add;
        printf("Sum of %d and %d is %.2f",a,b,(ptr)(a,b));
        break;
    case 2:
        ptr=&subtract;

         printf("Subtraction of %d and %d is %.2f",a,b,(ptr)(a,b));
        break;
    case 3:
        ptr=&multiply;
         printf("Multiplication of %d and %d is %.2f",a,b,(ptr)(a,b));
        break;
    case 4:
        ptr=&division;
         printf("Division of %d and %d is %.2f",a,b,(ptr)(a,b));
        break;
    }
}
