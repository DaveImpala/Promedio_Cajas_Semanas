#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i=0, cajas[8], totalC=0, dia=1;
    float promedio;
    char compa;
    do
    {
    switch(dia)
    {
    case 1:
        printf("se trabajo el Lunes\n");
        break;
    case 2:
        printf("se trabajo el Martes\n");
        break;
    case 3:
        printf("se trabajo el Miercoles\n");
        break;
    case 4:
        printf("se trabajo el Jueves\n");
        break;
    case 5:
        printf("se trabajo el Viernes\n");
        break;
    case 6:
        printf("se trabajo el Sabado\n");
        break;
    case 7:
        printf("se trabajo el Domingo\n");
        break;
    }
    fflush(stdin);
    scanf("%c",&compa);
    if(compa=='s'|| compa=='S')
    {
        printf("\tingresa el numero de cajas entregadas\n");
        scanf("%i",&cajas[dia]);
        while(cajas[dia]<0)
        {
            printf("\tError \tingresa el numero de cajas entregadas\n");
            scanf("%i",&cajas[dia]);
        }
    }
        totalC=totalC+cajas[dia];
        dia++;
        cajas[dia]=0;
    }while(dia<8);
    promedio=(float)totalC/7;
    for(dia=1;dia<8;dia++)
    {
        printf("El dia %i se entregaron tantas cajas %i\n",dia, cajas[dia]);
    }
    printf("El promedio de cajas entregadas es:\t %.4f\n\n", promedio);
    printf("El total de cajas entregadas es:\t %i\n\n", totalC);
    system("pause");
    return 0;

}
