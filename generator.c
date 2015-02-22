#include <stdio.h>
//testte
//tabela ascii (a..z)  = 97..122
//(A..Z) = 65..90
//(0..9) = 48..57

int main()
{
    int i;
    i=0;
    do
    {
        printf("%d %c \n",i,i); //print words
        i++;
    }
    while(i<=255);
    return 0;
}
