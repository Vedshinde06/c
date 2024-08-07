#include<stdio.h>
int main()
{
    int rows = 4;
    int column = 5;

    for (int i = 0; i <=rows; i++)
    {
        for (int k = 0; k < column; k++)
        {
           printf("*");
           
        }
      
       printf("\n");
       
    }

    return 0;
}