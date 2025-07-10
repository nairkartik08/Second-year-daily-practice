#include <stdio.h>
int main() 
{
    int n,i=2;
    printf("Enter a number: ");
    scanf("%d",&n);
    while (n%i!=0)
    {
        i++;
    }
    if (i==n)
    printf("%d is a prime number",n);
    else
    printf("%d is not a prime number",n);
    return 0;
}
