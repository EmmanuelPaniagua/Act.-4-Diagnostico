#include <stdio.h>
#include "personaje.h"

void capturar_enteros()
{
	int enteros[5];
	float promedio;
	int suma = 0;
	int i;
	
	printf("\nIngresa los enteros\n");
	for ( i = 0; i < 5 ; i++)
	{
		scanf("%i", &enteros[i]);
	}
	printf("\n");
	for ( i = 0; i < 5 ; i++)
	{
		printf("%i\n", enteros[i]);
	}
	for ( i = 0; i < 5 ; i++)
	{
		suma = suma + enteros[i];
	}
	printf("Suma: %i\n", suma);
	printf("Promedio: %f\n", suma/5.0);
}

void mostar(int n, char cadena[])
{
	int i;
	for( i = 0 ; i < n ; i++)
	{
		printf("%s\n", cadena);
	}
}


int main()
{
	char op;
	char cadena[20];
	int n;
	do
	{
		system("cls");
		printf("MENU\n");
		printf("1) Capturar enteros\n");
		printf("2) Mostrar cadena n veces \n");
		printf("3) Agrega personaje\n");
		printf("4) Mostrar personaje\n");
		printf("0) Salir\n");
		scanf("%c", &op);
		fflush(stdin);
		switch (op)
		{
			case '1':
				capturar_enteros();
				system ("pause");
				break;
			case '2':
				printf("\nEscribe una cadena de hasta 20 caracteres:\n");
				fflush(stdin);
				gets(cadena);
				printf("n: ");
				scanf("%i", &n);
				mostar(n, cadena);
				system ("pause");
				break;
			case '3':
				capturar_personajes();
				system ("pause");
				break;
			case '4':
				mostrar_personajes();
				system ("pause");
				break;
			default:
				break;
		}	
	}while(op != '0');
	return 0;
}

