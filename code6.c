// Write a code to print sum of first n natural numbers.

#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    int sum = 0;
    for (int i=1; i<=n ; i++)
    {
        
        sum += i;
       

    } printf("%d" , sum); 
    return 0;
}