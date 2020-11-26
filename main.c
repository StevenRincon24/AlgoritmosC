//programa presentado con el fin de llevar a cabo el trabajo colaborativo

#include <stdio.h>
#include <string.h>

void menu(){
    int option;
    while (option != 10){
        
        printf("Ingrese la opción deseada:\n1.Convertir en nombre propio\n"
               "2.Contar palabras en una cadena\n3.Encriptar cadena\n4.Desencriptar cadena"
               "\n5.Llenar caracteres\n6.Borrar caracteres\n7.Intersección\n8.Diferencia entre dos cadenas"
               "\n9.Borrar caracteres por izquierda o derecha\n10.Salir\n");

        scanf("%i",&option);

        switch (option) {

            case 1:printf("eligio %i\n", option);
                break;

            case 2:printf("eligio %i\n", option);
                break;

            case 3:printf("eligio %i\n", option);
                break;

            case 4:printf("eligio %i\n", option);
                break;

            case 5:printf("eligio %i\n", option);
                break;

            case 6:printf("eligio %i\n", option);
                break;

            case 7:printf("eligio %i\n", option);
                break;

            case 8:printf("eligio %i\n", option);
                break;

            case 9:printf("eligio %i\n", option);
                break;

            default :
                printf("Opción no valida");
                break;

        }
    }
}

int main() {
    menu();
    return 0;
}
