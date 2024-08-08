//factorial using recursion

#include<stdio.h>

int fact (int n);

int main() 
{
    int number;
    printf("Enter a number:\n");
    scanf("%d", &number);

    printf("Factorial is:%d", fact(number));

    return 0;
}

int fact(int n) {

    if (n==0)
    {
        return 1;
    }

    int factnm = fact(n-1);
    int factn = (factnm * n);

    return factn;
}