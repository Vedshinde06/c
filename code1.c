/*

Task:

1. Declare two int and two float variables.
2. Read their values from input.
3. Print the sum and difference of the int variables.
4. Print the sum and difference of the float variables, rounded to one decimal place.

 */


#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    int a, b;
    float c, d;
    
    printf("Enter numbers");
    scanf("%d %d", &a, &b);
    scanf("%f %f", &c, &d);

    printf( "%d %d\n", a+b, a-b);
    printf( "%.1f %.1f\n", c+d, c-d);

    return 0;

}

