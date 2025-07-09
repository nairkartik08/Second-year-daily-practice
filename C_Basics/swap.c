#include <stdio.h>

int main()
{
    int a= 2;
    int b= 4;
    printf("Before swapping,a= %d and b= %d\n",a,b);
    int temp= b;
    b = a;
    a= temp;
    printf("After swapping,a= %d and b= %d",a,b);
}
