#include <stdio.h>
//testte
//tabela ascii (a..z)  = 97..122
//(A..Z) = 65..90
//(0..9) = 48..57
//Obrigado
int main()
{
/*
	int pw[35];

	int j, x; 

	for (j = 97; j <= 122; j++)
	{
		pw[x] == j;
		x++;
	}

	for (j = 48; j<= 57; j++)
	{
		pw[x] == j; 
		x++;
	}
*/
	int pwlen=0;


	printf("Enter Password length: ");
	scanf("%d", &pwlen);

	// printf("Deseja usar letras maiusculas:\n1-Sim\n2-Não\n\n "); To be implemented
	// printf("Your password is: ");


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
		printf("%c",i);
		i++;

	}
	while(count<pwlen);
	printf("\n");
	return 0;

}
