#include<stdio.h>
int main()
{
    int n1,n2;
    scanf("%d%d",&n1,&n2);
    int add=n1+n2;
    int sub=n1-n2;
    int mul=n1*n2;
    int quo=n1/n2;
    int mod=n1%n2;
    printf("Sum:%d\n",add);
    printf("Difference:%d\n",sub);
    printf("Product:%d\n",mul);
    printf("Quotient:%d\n",quo);
    printf("Remainder:%d\n",mod);
}