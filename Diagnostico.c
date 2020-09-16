#include <stdio.h>

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

int main()
{
	char op;
	do
	{
		system("cls");
		printf("MENU\n");
		printf("1) Capturar enteros\n");
		printf("2) Mostrar cadena n veces \n");
		printf("3) Agrega personaje\n");
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
				break;
			case '3':
				break;
			default:
				break;
		}	
	}while(op != '0');
	return 0;
	
}
