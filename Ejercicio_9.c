#include<stdio.h>
#include<stdlib.h>

void main ()
{
    int Num=0, I=0, Comp[2]={0};
    printf("Introduzca la cantidad de numeros a ingresar: ");
    scanf("%d", &Num);

    int  Nums[Num];

    printf("Introduzca los numeros\n");
    for (I=1; I<=Num; I++)
    {
        scanf("%d", &Nums[I]);
    }

    Comp[0]=1;
    Comp[1]=1;

    for (I=1; I<Num; I++)
    {
        if (Nums[I]<Nums[I+1])
        {
            Comp[0]+=1;
        }
        else
        {
            if (Nums[I]>Nums[I+1])
            {
                Comp[1]+=1;
            }
        }
    }

    if (Comp[0]==Num)
    {
        printf("Los numeros fueron ingresados de manera ascendente");
    }
    else
    {
        if (Comp[1]==Num)
        {
            printf("Los numeros fueron ingresados de manera descendente");
        }
        else
        {
            printf("Los numeros fueron ingresados de manera desordenada");
        }
    }
}
