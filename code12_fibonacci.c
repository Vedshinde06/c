#include<stdio.h>
int main()
{
    int num;

    printf("Enter a number");
    scanf("%d", &num);
    printf(fib(num));
}

int fib(int n){

    if (n==0 || n==1)
    {
        if (n==0)
        {
            return 0;
        }
        if (n==1)
        {
            return 1;
        }
        
        
    }
    

    int fibN1 = fib(n-1);
    int fibN2 = fib(n-2);
    int fibN = (fibN1) + (fibN2);
    printf("Fib of %d is %d\n", n, fibN);
    return fibN;
}
