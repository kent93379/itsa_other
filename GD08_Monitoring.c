#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_N 10000
//ex 5 0 1 1 3 means 5 people
//   0 is 1's boss, 1 is 2's boss .....
//     0(boss)
//     |
//     1
//    / \
//   3   2
//   |
//   4

int main()
{
    int T,N,t[MAX_N],i,mark[MAX_N],total;

    scanf("%d",&N);
    for(i=1; i<N; i++)
        scanf("%d",t+i);
    memset(mark,0,sizeof(mark));
    total=0;
    for(i=N-1; i>0; i--)
    {
        if(mark[i]||mark[t[i]])
            continue;
        mark[t[i]]=1; //若上頭OR自己沒被監控，監控當前的上頭
        total++;
    }
    printf("%d\n",total);
    /*for(i=0;i<N;i++)
        printf("mark[%d]=%d\n",i,mark[i]);*/
}
