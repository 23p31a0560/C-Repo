#include<stdio.h>
#include<math.h>
int main()
{
    int s,a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c && b+c>a && a+c>b)
    {
    double  s=(a+b+c)/2.0;
    double area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%.4f\n",area);
    }
    else
    {
        printf("0.0000\n");
    }
    return 0;

}