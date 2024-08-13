//Write a code to pirnt largest number in an array.

#include<stdio.h>

int largest(int arr[], int n);

int main(){
    int arr[] = { 20, 3, 6, 37, 2, 9};
    largest(arr, 5);

}

int largest(int arr[], int n){
    int max=0;
    int i = 0;
    for( int i=0; i<=n; i++){
    
        if(arr[i] >= max){
            max = arr[i];
            i++;
         }
    }
    printf("%d", max);
}