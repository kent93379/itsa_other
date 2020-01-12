#include <stdio.h>
#include <string.h>
#include <ctype.h>
//Write a program to translate a secret text.
//The text is encrypted by the following rules.
//First if the text is a lowercase letter, we translate it into an uppercase letter, and the first letter ¡¥a¡¦ is translate into the last letter ¡¥Z¡¦,
//the second letter ¡¥b¡¦ is translated into the second to the last letter ¡¥Y¡¦, and so on.
// If the text is an uppercase letter, we translate it into a lowercase letter similarly.
//If we see a digit, we will translate it into the next digit,
// and the only exception is ¡¥9¡¦, which will be translated into ¡¥0¡¦. On all other cases, the text is not changed.
int main()
{
    const unsigned char midx2='z'+'A';
    char c;
    while(scanf("%c",&c)!=EOF)
    {
        if(isdigit(c))//¹J¨ì¼Æ¦r
        {
            if(c=='9')
                printf("0");
            else
                printf("%c",c+1);
        }
        else if(islower(c)||isupper(c))//¹J¨ì¦r¥À
            printf("%c",midx2-c);
        else
            printf("%c",c);
    }
}
