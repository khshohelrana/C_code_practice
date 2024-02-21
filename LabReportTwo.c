#include<stdio.h>
#define scalefactor 5/9
#define freezingpoint 32

int main()

{
    float celsius,fahrenheit;
    printf("Enter the value of temperature in fahrenheit:");
    scanf("%f",&fahrenheit);

  celsius=( fahrenheit – freezingpoint)* scalefactor

    printf("Equivalent temperature in fahrenheit is=%.2f\n", celsius);
    return 0 ;
}
