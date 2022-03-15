#include<stdio.h>

int main()
{
    int n;
    long S=0;
    long p=1;
    printf("nhap n= ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {   p=p*i;
        S=S+p;
    }
    printf("S= %d",S);
    return 0;
}