#include <stdio.h>

void palindrome(int num){
    int sum=0,r,temp = num;
    while(num > 0){
        r = num%10;
        sum = sum*10 + r;
        num = num/10;
        // printf("%d\n", sum);
    }
    if(sum == temp){
        printf("Palindrome");
    }
    else {
        printf("NOT Palindrome");
    }
}

int main()
{
    int num, z;
    printf("Enter the number :");
    scanf("%d", &num);
    palindrome(num);
    return 0;
}
