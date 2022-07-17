#include <stdio.h>
main()
{
    int x, i;
    do
    {
        i = 0;
        printf("Ingrese el valor numerico a ser evaluado: ");
        scanf("%d", &x);

        switch (x)
        {
        case 1:
            printf("El numero corresponde a: Uno\n");
            break;
        case 2:
            printf("El numero corresponde a: Dos\n");
            break;
        case 3:
            printf("El numero corresponde a: Tres\n");
            break;
        case 4:
            printf("El numero corresponde a: Cuatro\n");
            break;
        case 5:
            printf("El numero corresponde a: Cinco\n");
            break;
        case 6:
            printf("El numero corresponde a: Seis\n");
            break;
        case 7:
            printf("El numero corresponde a: Siete\n");
            break;
        case 8:
            printf("El numero corresponde a: Ocho\n");
            break;
        case 9:
            printf("El numero corresponde a: Nueve\n");
            break;
        case 10:
            printf("El numero corresponde a: Diez\n");
            break;
        case 11:
            printf("El numero corresponde a: Once\n");
            break;
        case 12:
            printf("El numero corresponde a: Doce\n");
            break;
        case 13:
            printf("El numero corresponde a: Trece\n");
            break;
        case 14:
            printf("El numero corresponde a: Catorce\n");
            break;
        case 15:
            printf("El numero corresponde a: Quince\n");
            break;
        case 16:
            printf("El numero corresponde a: Dieciseis\n");
            break;
        case 17:
            printf("El numero corresponde a: Diecisiete\n");
            break;
        case 18:
            printf("El numero corresponde a: Dieciocho\n");
            break;
        case 19:
            printf("El numero corresponde a: Diecinueve\n");
            break;
        case 20:
            printf("El numero corresponde a: Veinte\n");
            break;
        default:
            printf("No Valido, intente nuevamente \n");
            i++;
            break;
        }
    } while (i == 1);
    return 0;
}
