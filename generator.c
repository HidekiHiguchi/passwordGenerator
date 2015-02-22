#include <stdio.h>
//testte
//tabela ascii (a..z)  = 97..122
//(A..Z) = 65..90
//(0..9) = 48..57
//Obrigado
int main()
{
int pwlen;


printf("Enter Password length: ");
scanf("%d", &pwlen);

printf("Deseja usar letras maiusculas:\n1-Sim\n2-Não\n\n ");



         int i,count=0;
	  srand ( time(NULL) );
         do
         {
                count++;
		do
		{
                	 i = rand() % 122;
		}
		while(i<48 || i>57 && i<97);
                 printf("%d %c \n",i,i);
                 i++;

         }
         while(count<=pwlen);
         return 0;

}
