#include <stdio.h>
//testte
//tabela ascii (a..z)  = 97..122
//(A..Z) = 65..90
//(0..9) = 48..57

int main()
{
         int i,count=0;
         do
         {
                count++;
                 i = rand() % 120;
                 printf("%d %c \n",i,i);
                 i++;
         }
         while(count<=8);
         return 0;

}
