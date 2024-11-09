#include<stdio.h>
int main()
{
    int cp,sp;
    scanf("%d%d",&cp,&sp);
    int loss=cp-sp;
    double per=(double)loss*100/cp;
    printf("%.2f\n",per);
}