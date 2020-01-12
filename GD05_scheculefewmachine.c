#include <stdio.h>
#include <stdlib.h>
#define MAX_N 3000
#define MAX_M 10

int min(unsigned long long M[],int num)
{
    int min=0,i;
    for(i=1; i<num; i++)
        min=(M[i]<M[min])? i:min;
    return min;
}

int max(unsigned long long M[],int num)
{
    int max=0,i;
    for(i=1; i<num; i++)
        max=(M[i]>M[max])? i:max;
    return max;
}

int main()
{
    int T,N,M,i;
    unsigned long long M_time[MAX_M];
    unsigned t;

    scanf("%d%d",&N,&M);//n工作量 m機器數量
    memset(M_time,0,sizeof(M_time));
    for(i=0; i<N; i++)
    {
        scanf("%u",&t);
        M_time[min(M_time,M)]+=t; //把工作分給工作時間較小的機器 盡可能讓兩邊所需時間相近
    }
    printf("%llu\n",M_time[max(M_time,M)]); //要等工作時間略多的那台運作完

    return 0;
}
