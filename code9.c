#include<stdio.h>
float squarearea(float side);
float rectanglearea(float l, float b);
float circlearea(float r);

float squarearea(float side) {
    return side * side ;
}

float rectanglearea(float l, float b){
    return l * b ;
}

float circlearea(float r){
    return 3.14 * 2 * r;
}

int main()
{
    float r, S, L, B;
    printf("Enter the value of radius :");
    scanf("%f" , &r);
    printf("Enter the value of side :");
    scanf("%f" , &S);
    printf("Enter the value of length and breadth :");
    scanf("%f %f" , &L, &B);

    printf("Area of circle is %f\n", circlearea(r));
    printf("Area of square is %f\n", squarearea(S));
    printf("Area of rectangle is %f\n", rectanglearea(L, B));
    
    return 0;
}