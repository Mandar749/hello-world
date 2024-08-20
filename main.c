#include <stdio.h>
#include <stdlib.h>

/* Celsius to Fahrenheit converter*/

 int main()

{
     char heading[] = "Converter";
     printf("%20s\n", heading);


    double C, F;
    double lower, upper, step;

    lower = 0;
    upper = 10;
    step = 1;

    C = lower;
    while(C <= upper) {
         F = (C * 9/5) + 32;
         printf("%f\t%f\n", C, F);
         C = C + step;

    }
    return 0;
}
