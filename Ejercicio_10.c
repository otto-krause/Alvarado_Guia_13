#include<stdio.h>
#include<stdlib.h>

void main()
{
    int Nums[11]={0}, Operaciones[4]={0}, I=0;
    printf("Ingrese diez numeros\n");
    for (I=1; I<=10; I++)
    {
        scanf("%d", &Nums[I]);
    }

    system("cls");

    Operaciones[2]=1;

    for (I=1; I<=10; I++)
    {
        Operaciones[1]=Operaciones[1]+Nums[I];
        Operaciones[2]=Operaciones[2]*Nums[I];
        Operaciones[3]=Operaciones[1]/10;
    }
    
    for (I=1; I<=10; I++)
    {
        if (Nums[I]<Operaciones[3])
        {
            Operaciones[0]+=1;
        }
        
    }
    printf("La suma del vector es %d, su producto %d y su promedio %d\n", Operaciones[1], Operaciones[2], Operaciones[3]);
    printf("\nLa cantidad de numeros por debajo del promedio son %d", Operaciones[0]);    
}