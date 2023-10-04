#include<stdio.h>
#include<math.h>
int main()
{
    double x,y,x1,y1;
    double Distance;
    scanf("%lf%lf%lf%lf",&x,&y,&x1,&y1);

    Distance=sqrt(pow(x1-x,2)+pow(y1-y,2));

    printf("%.4lf\n",Distance);

    return 0;


}
