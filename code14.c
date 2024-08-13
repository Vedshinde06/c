#include<stdio.h>
int reverse(int ar[], int n);
int printarr(int arr[], int x);


int main(){
    int arr[]={1,2,3,4,5};

    reverse(arr, 5);
    printarr(arr, 5);
}

int reverse(int ar[], int n){
    
    for(int i=0; i<5/2; i++)
    {
        
         int firstNo = ar[i];
         int secondNo = ar[n-i-1];

        ar[i]= secondNo;
        ar[n-i-1]= firstNo;
        }
   }

int printarr(int arr[], int x){

    for (int i = 0; i < x; i++)
    {
        printf("%d\t", arr[i]);
    }
    
}
