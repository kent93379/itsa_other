#include<stdio.h>

//��Xn�ӽL�l���e����n�ʴX�B:2^n-1
int main()
{
    int i,n,move=2;
    scanf("%d",&n);
    for(i=0; i<n-1; i++)
        move=move*2;
    move=move-1;
    printf("%d\n",move);
    return 0;
}
