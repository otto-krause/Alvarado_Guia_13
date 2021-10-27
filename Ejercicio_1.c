#include<stdio.h>
#include<stdlib.h>

void main()
{
    int Resistencias[6]={0}, I=0;
    printf("Ingrese cinco resitencias a sumar\n");

    for (I=1; I<=5; I++)
    {
        scanf("%d", &Resistencias[I]);
        Resistencias[0]=Resistencias[0]+Resistencias[I];
    }

    system("cls");

    printf("La resistencia total es %d", Resistencias[0]);
}