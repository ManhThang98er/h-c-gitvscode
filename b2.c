#include <stdio.h>
int main()
{
    int n;
    long S = 0;
    printf("Nhap so n: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        S = S + i*i;
    }
    printf("\n Tong 1^2 +...+ %d^2 la %ld", n, S);
    return 0;
}