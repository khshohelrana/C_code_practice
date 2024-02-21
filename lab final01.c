#include<stdio.h>
int main()
{  char s[100];
    printf("\n Write the sentence: ");
    gets(s);
    printf("All the words are:\n");
    for(int i=0; s[i]!='\0'; i++)
    {  if(s[i]>='a'  && s[i]<='z'    || s[i]>='A' && s[i]<='Z' )

       { if(s[i]==' ')
          {continue;}
         else
       printf("%c",s[i]);}

      else
    { printf("\n");}
    }
    return 0;
}
