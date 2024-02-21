#include<stdio.h>
int AddNewStudent(int n);
int FindStudentDetails(int n);
int printDB(int n);

struct student
{ struct name
    {char f_name[20];
     char l_name[20];
    }n;
    struct dob
    { int dd;
      int mm;
     int yyyy;
    }d;
    char g_name[20];
    int roll;
    float result;
}s[100];

int main()
{
    int n,i;
    printf("Enter student number:");
    scanf("%d",&n);

    AddNewStudent(n);
    FindStudentDetails(n);
    printDB(n);

    printf("\n------------------------------------------------------\n");

    for(i=0; i<n; i++)
    {
        printf("Student name: %s %s\n",s[i].n.f_name,s[i].n.l_name);
        printf("Student date of birth: %d/%d/%d\n",s[i].d.dd,s[i].d.mm,s[i].d.yyyy);
        printf("Student's gardian name: %s\n",s[i].g_name);
        printf("Student's roll: %d\n",s[i].roll);
        printf("Student's result: %.2f\n",s[i].result);
    }

return 0;
}


int AddNewStudent(int n)
{ int i;

    for(i=1; i<n; i++)
    {
        printf("Enter student full name:\n");
        printf("Enter first name:");
        scanf("%s",&s[i].n.f_name);

        printf("Enter last name:");
        scanf("%s",s[i].n.l_name);
    }}
int FindStudentDetails(int n)
{  int j;
  for(j=1; j<n; j++ )
    { printf("Enter student details:\n");
        printf("Enter student's gardian name:");
        scanf("%s",&s[j].g_name);

        printf("Enter student roll:");
        scanf("%d",&s[j].roll);

        printf("Enter student result:");
        scanf("%f",&s[j].result);
    }}
int printDB(int n)
{  int k;
    for(k=1; k<n; k++)
    {
        printf("Enter student date of birth dd/mm/yyyy:");
        scanf("%d %d %d",&s[k].d.dd,s[k].d.mm,s[k].d.yyyy);
    }

}
