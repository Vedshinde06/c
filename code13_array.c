// program to count odd numbers in a array.

#include<stdio.h>

int odd_count (int odd[]);

int main(){
    
    int arr[5] = { 2, 3, 4, 5, 6};
    odd_count(arr);

}

int odd_count (int odd[]){
    int count = 0;
    for (int x = 0; x < 5; x++)
    {
        if (x%2 != 0)
        {
            count++;
        }
                
    }
    printf("Count of odd numbers is %d", count);
}