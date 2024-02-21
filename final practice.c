  //decending order for 3 subject total mark
/*
#include<stdio.h>

struct student
{
	char name[30];
	int rollno;
	int sub[3];
	int total;
};

int main()
{
	int i, n, j;
	struct student st[20], temp;

	printf("Enter number of students data you want to enter:\n");
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		printf("Enter name of student %d\n",(i+1));
		scanf("%s",&st[i].name);
		printf("Enter Roll No of student %d\n",(i+1));
		scanf("%d",&st[i].rollno);
		printf("Enter marks for 3 subjects of student %d\n",(i+1));
		scanf("%d%d%d",&st[i].sub[0],&st[i].sub[1],&st[i].sub[2]);
		st[i].total = (st[i].sub[0]+st[i].sub[1]+st[i].sub[2]);
		printf("Total Marks of %d student = %d\n",(i+1), st[i].total);
	}
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(st[i].total < st[j].total)
			{
				temp = st[i];
				st[i] = st[j];
				st[j] = temp;
			}
		}
	}
	printf("\n\n\n\t\t******Sorted in descending order******");
	for(i=0; i<n; ++i)
	{
		printf("\nName of student: %s",st[i].name);
		printf("\nRoll No of student: %d",st[i].rollno);
		printf("\nTotal of student: %d\n",st[i].total);
	}
	getch();
}
*/
//Ascending order (number)
/*
#include<stdio.h>
int main()
{
   int i,j,count;
   char str[25][25],temp[25];
   puts("How many strings u are going to enter?: ");
   scanf("%d",&count);

   puts("Enter Strings one by one: ");
   for(i=0;i<=count;i++)
      gets(str[i]);
   for(i=0;i<=count;i++)
      for(j=i+1;j<=count;j++){
         if(strcmp(str[i],str[j])>0){
            strcpy(temp,str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],temp);
         }
      }
   printf("Order of Sorted Strings:");
   for(i=0;i<=count;i++)
      puts(str[i]);

   return 0;
}
*/


/*

#include<stdio.h>

struct Employess
{ char name[100];
  char address[100];
  int salary;

};
int main()
{
    struct Employess x[100], y[100];
    for(int i=0; i<5; i++)
    {   printf("\n");
        printf(" Enter Your Name: ");
        scanf("%s",&x[i].name);
        printf(" Enter Your Address: ");
        scanf("%s",&x[i].address);
        printf(" Enter Your Salary: ");
        scanf("%d",&x[i].salary);
   }
    for(int i=0; i<5; i++)
    {
        for(int j=i+1; j<5; j++)
        {
            if(strcmp(x[i].name,x[j].name)>0)
            {
                y[i]=x[i];
                x[i]=x[j];
                x[j]=y[i];
            }
        }
    }
    printf("\n Information of each employee in alphabetical order of their name.");
    printf("\n -----------------------------------------------------------------");
    printf("\n\n Name\t\t\t Address\t\t Salary");
    printf("\n");
    for(int i=0; i<5; i++)
    {    printf("\n");
        printf(" %s\t\t\t%s\t\t\t\%d ",x[i].name,x[i].address,x[i].salary);
    }
    printf("\n");
}
*/
/*
#include<stdio.h>
struct Employee
{
  char name[100];
  char address[100];
  int age;
  float salary;
}s[100];

int main()
{
    int n;
    float avg;
    printf("\n Enter How many employees you want: ");
    scanf("%d",&n);
    printf("\n    ENTER INFORMATION OF EMPLOYEES:   ");
    for(int i=0; i<n; i++)
    {   printf("\n");
        printf("\n Employee %d's info:",i+1);
        printf("\n Enter last name:");
        scanf("%s",s[i].name);
        printf(" Enter the address:");
        scanf("%s",s[i].address);
        printf(" Enter age:");
        scanf("%d",&s[i].age);
        printf(" Enter salary:");
        scanf("%f",&s[i].salary);
        avg=avg+s[i].salary;
    }
    float x=avg/n;
    printf("\n The average of %d employees is %.2f",n,x);
    printf("\n");
}
*/

/*
#include<stdio.h>
struct employee
{ char name[100];
  struct date
  {
    int day;
    int month;
    int year;

  }s2;
    int id;
    int salary;

}s1;
int main()
{
    printf("\n Enter Name: ");
    gets(s1.name);
    printf("\n Enter Date of Birth: ");
    scanf("%d",&s1.s2.day);
    scanf("%d",&s1.s2.month);
    scanf("%d",&s1.s2.year);
    printf("\n Enter ID: ");
    scanf("%d",&s1.id);
    printf("\n Enter Salary: ");
    scanf("%d",&s1.salary);
    printf("\n\n Employee’s name, id, date of birthday and salary");
    printf("\n-----------------------------------------------------");
    printf("\n\n Name: %s",s1.name);
    printf("\n ID: %d",s1.id);
    printf("\n Date of Birth: %d/%d/%d",s1.s2.day, s1.s2.month, s1.s2.year);
    printf("\n Salary: %d\n\n",s1.salary);
}
*/


















































































