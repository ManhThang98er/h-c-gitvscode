#include<stdio.h>

int main()
{
    int n;
    int x=0;
    float S=0;
    printf("nhap n= ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        x=x+i;
        S=S+1.0/x;
    }
    printf("S= %f",S);
}