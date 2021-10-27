#include<stdio.h>
#include<stdlib.h>

void main()
{
    int NumV[21]={0}, I=0, VentaM=0, VendedorM=0;
    printf("Ingrese la nota de cada alumno\n");

    for (I=1; I<=20; I++)
    {
        printf("Vendedor %d\nUnidades vendidas: ", I);
        scanf("%d", &NumV[I]);

        NumV[I]=NumV[I]*15;
        NumV[0]=NumV[0]+NumV[I];

        if (NumV[I]>VentaM)
        {
            VentaM=NumV[I];
            VendedorM=I;
        }
    }
    
    system("cls");

    printf("\nLas unidades totales vendidas fueron %d. La venta mayor fue de %d unidades y la hizo el vendedor %d", NumV[0], VentaM, VendedorM);
}