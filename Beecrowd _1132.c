#include<stdio.h>
int main()
{
    int x,y,i;
    scanf("%d%d",&x,&y);
    if(x>y){
        int sum=0;
        for(i=y;i<=x;++i){
            if(i%13!=0){
                sum+=i;
            }
        }
        printf("%d\n",sum);
    }else if(x<y){
        int sum1=0;
        for(i=x;i<=y;++i){
            if(i%13!=0){
                sum1+=i;
            }
        }
        printf("%d\n",sum1);
    }

    return 0;

}
