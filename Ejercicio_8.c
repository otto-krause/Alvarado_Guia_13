#include<stdio.h>
#include<stdlib.h>

void main()
{
    int R=0, I=0, Nums[3]={0};
    printf("Ingrese las repeticiones que desea realizar\n");
    scanf("%d", &Nums[0]);

    system("cls");

    Nums[2]=1;

    printf("0 ");
    for (I=1; I<=Nums[0]; I++)
        {
            Nums[3]=Nums[1]+Nums[2];
            Nums[1]=Nums[2];
            Nums[2]=Nums[3];

            printf("%d ", Nums[1]);
        }
}