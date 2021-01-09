#include <stdio.h>

int gcd(int x, int y){
    int gcd;
    int min = (x > y) ? x : y;
    for (int i = 2; i <= min; i++) {
        if (x%i == 0 && y%i == 0){
            gcd = i;
        }
    }
    return gcd;
}

int main()
{
    int n1 = 5, n2 = 10, g, lcm;
    g = gcd(n1, n2); 
    lcm = (n1 * n2)/ g;
    printf("HCM/GCD: %d , LCM:%d", g , lcm);
}
