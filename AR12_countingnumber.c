#include <stdio.h>

//紀錄每種數字各有幾個?
int main()
{
    int foo[104][6],temp,flag,i,j,Max,num;
    num=0;
    while(1)
    {
        scanf("%d",&temp);
        if(temp==-999) //若input=-999結束程市
            break;
        for(i=0,flag=1; i<num; i++)//用flag來檢查讀進來的數字有沒有記錄過了
        {
            if(temp==foo[i][0])
            {
                flag=0;
                break;
            }
        }
        if(flag==0)   //有記錄過->那個數字的數量++
            foo[i][1]++;
        else    //沒登記過->幫他登記
        {
            foo[num][0]=temp;
            foo[num][1]=1;
            num++;  //num用來紀錄總共有幾種數字
        }
    }
    for(i=0; i<num-1; i++)  //把那些數字的種類由大排到小
    {
        for(j=Max=i; j<num; j++)
        {
            if(foo[j][0]>foo[Max][0]) Max=j;
        }
        if(Max!=i)
        {
            for(j=0; j<3; j++)
            {
                temp=foo[i][j];
                foo[i][j]=foo[Max][j];
                foo[Max][j]=temp;
            }
        }
    }
    for(i=0; i<num; i++)
        printf("%d %d\n",foo[i][0],foo[i][1]);
    return 0;
}
