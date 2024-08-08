//To print sum of n natural numbers

#include<stdio.h>

int sum(int n);

int main()
{

    int a;
    printf("Enter number");
    scanf("%d", &a);
    printf("Sum is %d", sum(a));
    return 0;
}

int sum(int n)
{

    
    if (n==1)
    {
        return 1;
    }
    
    int sum_of_n_minus_1 = sum(n - 1);
    int sum_of_n = (sum_of_n_minus_1 + n);

    return sum_of_n;
}
