#include<stdio.h>

int main()
{
   float x,y,z;
   printf("\nEnter three different number:");
   scanf("%f%f%f",&x,&y,&z);

   if(x>y && x>z)
   {
       printf("\n%.2f is maximum number",x);
   }
   else if(y>x && y>z)
   {
       printf("\n%.2f is maximum number",y);
   }
   else
    {
       printf("\n%.2f is maximum number",z);
   }
   return 0;

}
