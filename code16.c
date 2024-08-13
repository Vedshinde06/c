
#include<stdio.h>


int main(){
    int arr[10] = { 20, 3, 6, 37, 2, 9};
    int n = 6;
    int x;
    printf("Enter last element:");
    scanf("%d", &x);

     if (n < sizeof(arr) / sizeof(arr[0])){
            arr[n]=x;
             n++;
     }else
     {
        printf("Array is full");
        return 1;
     }
    

    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    

    

}