#include<stdio.h>

int main()
{
    int num;
    scanf("%d",&num);
    if(num%2 == 0)
    {
        printf("The num is even");
    }
    else if (num%2 == 1)
    {
        printf("The num is odd");
    }
    return 0;
}