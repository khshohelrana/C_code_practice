#include<stdio.h>
struct shohel{
char name[100],d[100];
int id;
}cgpa;
struct student
{ struct shohel cgpa;
 float gpa;
}s[500];
int main()
{   int i,n;
printf("\n Enter How many students:");
scanf("%d",&n);
for(i=0;i<n;i++)
    {printf("Enter you id:");
   scanf("%d",&s[i].cgpa.id);
  printf("Enter your name:");
 scanf("%s",s[i].cgpa.name);
  printf("Enter your department:");
  scanf("%s",s[i].cgpa.d);
  printf("Enter your cgpa:");
   scanf("%f",&s[i].gpa);
  printf("\n");
    }
int x=s[0].gpa;
for(i=0;i<n;i++)
    {  for(int j=i+1;j<n;j++)
        { if(s[i].gpa<s[j].gpa)
        {  x=s[i].gpa;
          s[i].gpa=s[j].gpa;
          s[j].gpa=x;
        }}
    }
    printf("\tThe sorted:\n");
    for(i=0;i<n;i++)
    {
     printf("\t%d\n\t%s\n\t%s\n\t%.2f\n",s[i].cgpa.id,s[i].cgpa.name,s[i].cgpa.d,s[i].gpa);
    }
}
