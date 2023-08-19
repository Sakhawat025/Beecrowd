#include<stdio.h>
int main()
{
    int x,y;
    double z,Result;

    scanf("%d%d%lf",&x,&y,&z);
    Result=y*z;

    scanf("%d%d%lf",&x,&y,&z);
    Result +=y*z;

    printf("VALOR A PAGAR: R$ %.2lf\n",Result);

    return 0;
}
