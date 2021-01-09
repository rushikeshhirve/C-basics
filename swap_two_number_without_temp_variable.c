#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two numbers :");
    scanf("%d %d", &a, &b);
    printf("The Numbers are : %d and %d\n", a, b);
    
    a = a + b;
    b = a - b;
    a = a - b;
    printf("The Numbers are : %d and %d", a, b);
    return 0;
}
