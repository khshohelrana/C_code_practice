#include<stdio.h>
#define scalefactor 9/5
#define freezingpoint 32

int main()

{
    float celsius,fahrenheit;
    printf("Enter the value of temperature in celsius:");
    scanf("%f",&celsius);

  fahrenheit=(celsius*scalefactor)+freezingpoint;

    printf("Equivalent temperature in fahrenheit is=%.2f\n",fahrenheit);
    return 0 ;
}
