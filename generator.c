#include <stdio.h>
//testte
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
