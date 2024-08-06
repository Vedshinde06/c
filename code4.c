// Write a program to check if given character is a digit.

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character\n");
    scanf("%c", &ch);

    if (ch >= '0' && ch <= '9')  {
        printf("Given character in digit");
    }
    else {
        printf("Given character is alphabet");
    }
    return 0;

}