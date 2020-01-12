#include <stdio.h>



//從一串數字中找出彼此不相鄰並且相加的值最大
//independence set
int main()
{
    int n,M0,M1,paid,tmp0,tmp1;
    while(scanf("%d",&n))
    {
        if(n==0)
            break;
        M0=0; //m1就是選m0隔壁的情況
        M1=0;
        while(n--) //m0 m1 放的就是當前最大的兩種可能
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
