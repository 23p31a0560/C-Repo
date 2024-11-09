#include<stdio.h>
int main()
{
    int cp,sp;
    scanf("%d%d",&cp,&sp);
    int pro=sp-cp;
    double per=(double)pro*100/cp;
    printf("%.2f\n",per);
}