#include <stdio.h>

int fibonacci(int num){
    int a = 0, b = 1, c;
    printf("%d\n%d\n", a, b);
    for (int i = 2; i < num; i++){
        c = a + b;
        a = b;
        b = c;
        printf("%d\n", c);
    }
}

int main()
{
    int num, z;
    printf("Enter the number :");
    scanf("%d", &num);
    fibonacci(num);
    return 0;
}
