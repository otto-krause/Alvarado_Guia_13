#include<stdio.h>
#include<stdlib.h>

void main()
{
    int Nums[2]={0}, RNum[2]={0}, NI=0, I=0;
    printf("Ingrese dos numeros\n");
    scanf("%d", &Nums[1]);
    scanf("%d", &Nums[2]);

    system("cls");

    if (Nums[1]>Nums[2])
    {
        RNum[1]=Nums[1];
        RNum[2]=Nums[2];
    }
    else
    {
        RNum[1]=Nums[2];
        RNum[2]=Nums[1];
    }
    
    NI=RNum[1]-RNum[2]-1;

    int NumerosI[NI];

    for (I=RNum[1]-1; I>RNum[2]; I--)
    {
        NumerosI[NI]=I;
        printf("%d\n", NumerosI[NI]);
    }
}