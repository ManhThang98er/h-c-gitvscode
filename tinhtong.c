#include <stdio.h>
#include <math.h>

int main()
{
    int  n;
    long S=0;
    
    printf("\nNhap n: ");
    scanf("%d", &n);

    for(int i=1; i <= n; i++)
        {
        S = S + i;
        }
    printf("\nTong 1 + 2 + ... + %d la %ld: ", n, S);
    
    return 0;
}