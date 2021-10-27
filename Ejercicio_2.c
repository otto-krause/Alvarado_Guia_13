#include<stdio.h>
#include<stdlib.h>

void main()
{
    int Numeros[6]={0}, I=0, Promedio=0;
    printf("Ingrese cinco numeros\n");

    for (I=1; I<=5; I++)
    {
        scanf("%d", &Numeros[I]);
        Numeros[0]=Numeros[0]+Numeros[I];
    }

    Promedio=Numeros[0]/5;

    system("cls");

    printf("El promedio de los numeros ingresados es %d", Promedio);
}