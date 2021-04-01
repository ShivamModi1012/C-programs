#include<stdio.h>
#include<stdlib.h>
struct student{
char name[40];
int age;
float cgpa;
};
int main()
{
   struct student *st;
   int n,i;
   printf("Enter number of record to be stored");
   scanf("%d",&n);
   st=(struct student*)malloc(n*sizeof(struct student));
    for(i=0;i<n;i++)
        {
            fflush(stdin);
            printf("Enter name of %d student\n",i+1);
            fgets((st+i)->name,40,stdin);
            fflush(stdin);
             printf("Enter age of %d student\n",i+1);
            scanf("%d",&(st+i)->age);
            fflush(stdin);
             printf("Enter cgpa of %d student\n",i+1);
            scanf("%f",&(st+i)->cgpa);
        }
         for(i=0;i<n;i++)
        {
            printf("Name of %d student is ",i+1);
            puts((st+i)->name);
             printf("Age of %d student is %d years.\n",i+1,(st+i)->age);
             printf("cgpa of %d student is %f.\n",i+1,(st+i)->cgpa);
             printf("\n");
        }
}
