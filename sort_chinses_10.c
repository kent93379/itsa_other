#include <stdio.h>
#include <stdlib.h>

int values[100];

int compare (const void * a, const void * b)
{
    return ( *(int*)a - *(int*)b );
}

int main ()
{
    int i,n;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0; i<n; i++)
            scanf("%d",&values[i]);

        qsort (values, n, sizeof(int), compare);
        for (i=0; i<n; i++)
        {
            printf ("%d",values[i]);
            if(i!=n-1)
                printf(" ");
            if(i==n-1)
                printf("\n");
        }
    }
    return 0;
}
