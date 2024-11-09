#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    int s=z-y;
    int res=s/x;
    printf("%d",res);
}