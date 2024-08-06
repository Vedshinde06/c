//Program to get average of three numbers

#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter three numbers");
    scanf("%d %d %d" , &a, &b, &c);

    int avg = (a+b+c)/3;

    printf("\nAverage is %d" , avg);
    return 0;

}



