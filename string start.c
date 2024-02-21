/*#include<stdio.h>
int main()
{
    char str[16];
    printf("Enter you name:");
    //fgets(str ,sizeof(str), stdin);
    gets(str);
    //char *ptr= str;
   // for(int i=*ptr; *ptr!='\0'; ptr++)
    //{
    //    printf("%c",*ptr);
   // }
     //printf("%c",*(str+3));
     printf("reverse:%s", strrev(str));
   // stw(str);
    return 0;
}
void stw(char b[])
{
    printf("\n");
    printf("%s",b);
}

*/
/*
#include<stdio.h>
int main()
{
    char s[100], a;
    int i, c=0;
    printf("Enter any string: ");
    gets(s);
    printf("Enter find charecter:");
        scanf("%c",&a);
    for(i=0; s[i]!='\0'; i++)
    { if(s[i]==a)
    {
        c++;
    }

    }
    printf("%d",c);
}
*/
/*
#include<stdio.h>
int main()
{
    char s[1000], n;
    printf("Enter any string: ");
    gets(s);
    int c=0;
    printf("inpur character: ");
    scanf("%c",&n);
    for(int i=0; s[i]!='\0'; i++)
    {
        if(s[i]==' ')
        {
            c--;
        }
        if(s[i]==n)
        {
            c=c+i+1;
            break;
        }
    }
    printf("%c is found at index number %d", n,c);
}
*/
































































