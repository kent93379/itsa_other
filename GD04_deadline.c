#include <stdio.h>
#include <stdlib.h>
#define MAX_N 100

typedef struct
{
    unsigned t,d;
} JOB;

int cmp_mtoM(const void *a,const void *b)
{
    return ((JOB *)a)->d - ((JOB *)b)->d;
}

int main()
{
    int T,N,i,fail;
    unsigned long long cur_time;
    JOB jobs[MAX_N];
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&N);
        cur_time=0;
        for(i=0; i<N; i++)  //�һݮɶ�
            scanf("%u",&(jobs[i].t));
        for(i=0; i<N; i++)  //�I��ɶ�
            scanf("%u",&(jobs[i].d));
        qsort(jobs,N,sizeof(JOB),cmp_mtoM); //�����I��ɶ��̧֨쪺
        for(i=0,fail=0; i<N; i++)
        {
            if((cur_time+=jobs[i].t)>jobs[i].d) //�ˬd�O�_�ӱo�Χ���
            {
                fail=1;
                break;
            }
        }
        printf("%s\n",(fail==0)? "Yes":"No");
    }
    return 0;
}
