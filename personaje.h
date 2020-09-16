#ifndef PERSONAJE_H
#define PERSONAJE_H

#include<stdio.h>

struct personaje
{
    char nombre[20];
    char tipo[20];
    float fuerza;
    int salud;
}personajes[5];

unsigned int cont = 0;

void capturar_persona()
{
    if (cont < 5)
    {

        printf("Nombre: ");
        scanf("%s", personajes[cont].nombre);
        printf("Tipo: ");
        scanf("%s", personajes[cont].tipo);
        printf("Fuerza: ");
        scanf("%f", &personajes[cont].fuerza);
        printf("Salud: ");
        scanf("%i", &personajes[cont].salud);
        cont++;
    }
    else
    {
        print("Arreglo de personajes lleno\n");
    }
}



#endif