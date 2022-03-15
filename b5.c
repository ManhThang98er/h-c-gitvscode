#include<stdio.h>

int main()
{
    int n;
    float S=0;
    printf("nhap n= ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        S=S+1.0/(2*i+1);
    }
    printf("S= %f",S);
    return 0;
}