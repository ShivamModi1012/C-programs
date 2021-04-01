#include<stdio.h>
int fractionfunction(int,int,int,int,char);
int main()
{
	int n1,n2,d1,d2;
	float result;
	char ch;
	printf("enter value of n1");
	scanf("%d",&n1);
	printf("enter value of n2");
	scanf("%d",&n2);
	printf("enter value of d1");
	scanf("%d",&d1);
	printf("enter value of d2");
	scanf("%d",&d2);
	printf("enter the operation to be performed");
	scanf(" %c",&ch);
	result=fractionfunction(n1,n2,d1,d2,ch);
	printf("Final output=%f",result);
	return 0;
}
int fractionfunction(int n1,int n2,int d1,int d2,char ch)
{
	printf("%d, %d, %d, %d, %c",n1,n2,d1,d2,ch);
	double f1,f2,a,f;
/*	f=5/2;
	printf("%lf",f);*/
	f1=n1/d1;
	printf("\n%lf",f1);
	f2=n2/d2;
	printf("\n%lf",f2);
	switch(ch)
	{
		case '+':
			a= f1+f2;
			break;
			
			case '-':
				a= f1-f2;
				break;
				
				
				case '*':
					a=f1*f2;
					break;
					
					
					case '/':
						a=f1/f2;
						break;
	}
	
	return a;
	
}
