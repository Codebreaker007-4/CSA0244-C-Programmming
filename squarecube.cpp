#include<stdio.h>
int main()
{
    float num;
    float square,cube;
    printf("Enter the number :\n");
    scanf("%f",&num);
    square=num*num;
    cube=num*num*num;
    printf("the sqaure of %f is %2f\n",num,square);
    printf("the cube of %f is %2f",num,cube);
}


