#include<stdio.h>
#include<stdlib.h>

void main()
{
    int Sueldos[21]={0}, I=0, SMM[2]={0};
    printf("Ingrese los sueldos de las veinte personas\n\n");

    for (I=1; I<=20; I++)
    {
        printf("Sueldo persona %d\n", I);
        scanf("%d", &Sueldos[I]);
        
        if (Sueldos[I]>2000)
        {
            SMM[1]+=1;
        }
        else
        {
            SMM[2]+=1;
        }  
    }

    printf("La cantidad de personas que cobran mas de $2000 son %d y las que cobran menos de $2000 son %d", SMM[1], SMM[2]);
}