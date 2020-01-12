#include <stdio.h>
#include <stdlib.h>
#define MAX_N 1000



int min_to_max(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}

int main()
{
    int T,N,time[MAX_N],sum;
    int i,j;
    scanf("%d",&N);
    for(i=0; i<N; i++)
        scanf("%d",time+i);
    qsort(time,N,sizeof(int),min_to_max);
    for(i=0,j=N,sum=0; i<N; i++,j--)
        sum+=time[i]*(2*j-1);
    printf("%d\n",sum);
    return 0;
}

//ex �P�T�즬��H�Z�������{ 10 20 30
//   ���ݮɶ�: ��1�� ��2�� ��3��
//               10    10    10�h
//                     10    10�^
//                     20    20�h
//                           20�^
//                           30�h
//
//
