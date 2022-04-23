#include<stdio.h>
#include<stdlib.h>

int main()
{
    int diact,mesct,anioct,dian,mesn,anion,edad;
    printf("Ingresar dia actual: ");
    scanf("%d",&diact);
    fflush(stdin);
    printf("Ingresar mes actual: ");
    scanf("%d",&mesct);
    fflush(stdin);
    printf("Ingresar anio actual: ");
    scanf("%d",&anioct);
    fflush(stdin);

    printf("Ingresar dia de nacimiento: ");
    scanf("%d",&dian);
    fflush(stdin);
    printf("Ingresar mes de nacimiento: ");
    scanf("%d",&mesn);
    fflush(stdin);
    printf("Ingresar anio de nacimiento: ");
    scanf("%d",&anion);
    fflush(stdin);

    edad= anioct-anion;

    if (mesn>mesct || mesn==mesct && dian>diact) edad --;
    {
    if (mesn==mesct && dian==diact)
    {
    printf("\nHoy cumple %d anios. Feliz cumpleanios!\n\n", edad);
    }

    }
    printf("\nSu edad es: %d anios.\n\n", edad);

    return 0;
}
