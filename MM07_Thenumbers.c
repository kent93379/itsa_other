#include <stdio.h>

int main(void)
{
    int n,m,time;
    while(scanf("%d%d",&n,&m)!=EOF)
    {

        //�p��n�bm�̭��X�{�X��
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
