#include <stdio.h>

int main()
{
    int num, x = 0;
    printf("Enter the number :");
    scanf("%d", &num);
    for (int i = 2; i<num/2; i++){
        if (num % i == 0){
            printf("NOT PRIME");
            x = 1;
            break;
        }
    }
    if (x == 0){
        printf("PRIME");
    }

    return 0;
}
