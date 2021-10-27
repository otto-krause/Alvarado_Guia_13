#include<stdio.h>
#include<stdlib.h>

void main()
{
    int Notas[16]={0}, I=0;
    printf("Ingrese la nota de cada uno de los quince alumnos\n");

    for (I=1; I<=15; I++)
    {
        printf("Alumno %d\n", I);
        scanf("%d", &Notas[I]);
    }

    system("cls");

    printf("Los alumnos con nota igual o mayor a ocho son:\n");

    for (I=1; I<=15; I++)
    {
        if (Notas[I]>8)
        {
            printf("%d\n", I);
        }
    }
}