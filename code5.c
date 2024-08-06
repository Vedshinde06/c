// Write a program to find if a character entered by user is uppercase or lowercase.
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a letter\n");
    scanf("%c", &ch);

    if (ch>='a' && ch<='z'){
        printf("Letter is small\n");
    } 
    else if (ch>='A' && ch<='Z')
    {
         printf("Letter is capital\n");
    }
    else{printf("Please enter a letter");}
}