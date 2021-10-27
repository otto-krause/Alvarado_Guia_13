#include<stdio.h>
#include<stdlib.h>

void main()
{
    int NumA[30]={0}, I=0, Promedio=0;
    printf("Ingrese la nota de cada alumno\n");

    for (I=1; I<=30; I++)
    {
        printf("Alumno %d: ", I);
        scanf("%d", &NumA[I]);
        NumA[0]=NumA[0]+NumA[I];
    }
    
    Promedio=NumA[0]/30;
    
    printf("\nEl promedio del curso es %d", Promedio);
}