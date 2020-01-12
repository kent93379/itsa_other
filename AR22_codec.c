#include<stdio.h>
#include<string.h>


//Each ASCII code is minus 3.
//¦r¤¸Âà´«
int main()
{
    int len,i;
    char string[100];
    //while(1)
    {
        scanf("%s",string);
        len=strlen(string);
        for(i=0; i<len; i++)
            string[i]=string[i]-3;
        printf("%s\n",string);
    }
}

