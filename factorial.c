#include <stdio.h>

int factorial(int num){
    if (num ==  1 || num == 0 ){
        return 1;
    } 
    else {
        return num * factorial(num-1);
    }
}

int main()
{
    int num, z;
    printf("Enter the number :");
    scanf("%d", &num);
    z = factorial(num);
    printf("%d", z);
    return 0;
}
