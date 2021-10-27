#include<stdio.h>
#include<stdlib.h>

void main()
{
    int Nums[6]={0}, R[2]={0}, I=0;

    printf("Ingrese cinco numeros\n");
    for (I=1; I<=5; I++)
    {
        scanf("%d", &Nums[I]);
    }
    

    for (I=1; I<=5; I++)
    {
        while (Nums[I]<Nums[I+1])
        {
            R[0]+=1;
        }
        
        while (Nums[I]>Nums[I+1])
        {
            R[1]+=1;
        }
    }
    
    if (R[0]=5)
    {
        printf("Los numeros fueron ingreados de forma ascendente");
    }
    else
    {
        if (R[1]=5)
        {
            printf("Los numeros fueron ingresados de forma descendente");
        }
        else
        {
            printf("Los numeros fueron ingresados de forma desornedana");
        }
    }
}