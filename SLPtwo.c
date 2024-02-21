#include<stdio.h>
int main()
{   int s,e;
    printf("\n Start digit:");
    scanf("%d",&s);
    printf("\n End digit:");
    scanf("%d",&e);
    int sum=function(e,s);
    printf("\n Summation till %d from %d is %d",e,s,sum);
    printf("\n");
}
int function(int s,int e)
{   if(s==e)
    {
     return e;
    }
    else

    return s+function(s-1,e);

}




