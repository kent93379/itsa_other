#include <stdio.h>

//�����C�ؼƦr�U���X��?
int main()
{
    int foo[104][6],temp,flag,i,j,Max,num;
    num=0;
    while(1)
    {
        scanf("%d",&temp);
        if(temp==-999) //�Yinput=-999�����{��
            break;
        for(i=0,flag=1; i<num; i++)//��flag���ˬdŪ�i�Ӫ��Ʀr���S���O���L�F
        {
            if(temp==foo[i][0])
            {
                flag=0;
                break;
            }
        }
        if(flag==0)   //���O���L->���ӼƦr���ƶq++
            foo[i][1]++;
        else    //�S�n�O�L->���L�n�O
        {
            foo[num][0]=temp;
            foo[num][1]=1;
            num++;  //num�ΨӬ����`�@���X�ؼƦr
        }
    }
    for(i=0; i<num-1; i++)  //�⨺�ǼƦr�������Ѥj�ƨ�p
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
