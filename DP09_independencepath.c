#include <stdio.h>



//�q�@��Ʀr����X�������۾F�åB�ۥ[���ȳ̤j
//independence set
int main()
{
    int n,M0,M1,paid,tmp0,tmp1;
    while(scanf("%d",&n))
    {
        if(n==0)
            break;
        M0=0; //m1�N�O��m0�j�������p
        M1=0;
        while(n--) //m0 m1 �񪺴N�O��e�̤j����إi��
        {
            scanf("%d",&paid);
            tmp0=(M0>M1)? M0:M1;
            tmp1=M0+paid;
            //printf("tmp0=%d   tmp1=%d\n",tmp0,tmp1);
            M0=tmp0;
            M1=tmp1;
            //printf("m0=%d   m1=%d\n",M0,M1);
        }
        printf("%d\n",(M0>M1)? M0:M1);
        //printf("%d vs %d \n",M0,M1);
    }
    return 0;
}
