#include <stdio.h>
int main() {
    int dia, mes, anio;
    int diasDelMes;
    int bisiesto;

    printf("Ingrese el dia: ");
    scanf("%d", &dia);

    printf("Ingrese el mes: ");
    scanf("%d", &mes);

    printf("Ingrese el anio: ");
    scanf("%d", &anio);

    if ((anio % 400 == 0) ||
        (anio % 4 == 0 && anio % 100 != 0)) {
        bisiesto = 1;
    } else {
        bisiesto = 0;
    }

    switch (mes) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            diasDelMes = 31;
            break;

        case 4:
        case 6:
        case 9:
        case 11:
            diasDelMes = 30;
            break;

        case 2:
            if (bisiesto == 1) {
                diasDelMes = 29;
            } else {
                diasDelMes = 28;
            }
            break;

        default:
            diasDelMes = 0;
            break;
    }

    if (mes < 1 || mes > 12 || dia < 1 || dia > diasDelMes) {
        printf("\nFecha no valida.\n");
    } else {
        dia++;

        if (dia > diasDelMes) {
            dia = 1;
            mes++;

            if (mes > 12) {
                mes = 1;
                anio++;
            }
        }

        printf("\nEl siguiente dia es: %d/%d/%d\n",
               dia, mes, anio);
    }

    return 0;
}
