#include<stdio.h>
int main()
{
    int n,m,x;
    scanf("%d%d%d",&n,&m,&x);
    int area=2*(n+m);
    int cost=x*area;
    printf("%d",cost);

}