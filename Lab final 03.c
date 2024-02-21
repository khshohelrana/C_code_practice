#include<stdio.h>
int main()
{  int n;
   printf("\n Enter limit number: ");
  scanf("%d",&n);
  strong(n);
    return 0;
}
int fact(int n)
{  if(n==0)
    return 1;
    else
    {
     return (n*fact(n-1));
    }
}
void strong(int m)
{  int sum; int x;
   printf("\n Strong numbers up to %d are: ",m);
  for(int i=1; i!=m; i++)
    { sum=0; x=i;
      for(; x!=0; x=x/10)
      {
       sum=sum+fact(x%10);
      }
       if(sum==i)
       printf("%d, ",i);
    }
}

