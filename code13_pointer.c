/*Create the function void update(int *a,int *b).
It receives two integer pointers, int* a and int* b.
Set the value of  to their sum to a and  to their absolute difference to b.
There is no return value, and no return statement is needed.*/

#include<stdio.h>
#include<stdlib.h>
void update(int *a, int *b);


int main(){
    int a, b;
    int *pa = &a;
    int *pb = &b;
    printf("Enter Two Numbers: ");
    scanf("%d %d", &a, &b);

    update(pa , pb);

    printf("%d\n%d" , a, b);  
}

void update(int *a, int *b){
    int x = *a + *b;
    int y = abs(*a-*b);

    *a = x;
    *b = y;
}
