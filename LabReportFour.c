#include<stdio.h>

int main()

{
     float a,b,c,d,e,sum,avg ;
    printf("Enter marks of five subjects:");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);

  sum=(a+b+c+d+e);

    printf("Total marksis=%.2f\n", sum);

    avg=(sum/5);

     printf("Total marksis=%.2f\n", avg);

    return 0 ;
}
