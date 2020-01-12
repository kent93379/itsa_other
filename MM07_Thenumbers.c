#include <stdio.h>

int main(void)
{
    int n,m,time;
    while(scanf("%d%d",&n,&m)!=EOF)
    {

        //計算n在m裡面出現幾次
        time=0;
        while(m/10)
        {
            if(m%100==n)
                time++;
            m/=10;
        }
        printf("%d\n",time);
    }
    return 0;
}
