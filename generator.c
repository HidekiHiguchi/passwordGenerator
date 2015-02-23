#include <stdio.h>
//testte
//tabela ascii (a..z)  = 97..122
//(A..Z) = 65..90
//(0..9) = 48..57
//Obrigado
int main()
{

	int pw[59];


	int j=0, x=0; 

	for (j = 97; j <= 122; j++)
	{
		pw[x] = j;
		x++;
	}

	for (j = 48; j<= 58; j++)
	{
		pw[x] = j; 
		x++;
	}
	
	for(j =65; j<90; j++)
	{
		pw[x] = j; 
		x++;
	}

	int pwlen = 0;   
	char upper,exit; 

	do
	{

		printf("\n\nEnter Password length: ");
		scanf("%d", &pwlen);

		printf("\n\nWish to use upper case letter?: y/n?:  "); 
		scanf(" %c",&upper);   
	
		printf("\n\nYour password generated is: ");
	
		if(upper == 'n' || upper == 'n')
		{	

			int count, i;

			srand ( time(NULL) );
			for( count = 0; count <= pwlen -1  ;  count++)	
			{ 
				i = rand() % 36;
				printf("%c",pw[i]); 
			}
			printf("\n");
		}
		else
		{
	
			int count, i;

			srand ( time(NULL) );
			for( count = 0; count <= pwlen  ;  count++)	
			{ 
				i = rand() % 59;
				printf("%c",pw[i]); 
			}
			printf("\n\n");

		}
		printf("\n\ntry again? y/n: ");
		scanf(" %c",&exit);
	}
	while(exit == 'y' || exit =='Y');
	return(0);
//well done
}
