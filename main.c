#include <stdio.h>
#include <stdlib.h>

void encriptar();
void desEncriptar();
void menu();

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

            case 3:encriptar();
                break;

            case 4:desEncriptar();
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
            case 10:printf("Hasta luego");
                break;

            default :
                printf("Opción no valida");
                break;
        }
    }
}
void encriptar(){
    char frase[500];
    printf("Introduzca una frase a encriptar: ");
    scanf("%s", &frase);
    int sum=0;
    int x;
    for(x = 0; x < 500; x++)
    {
        if (frase[x]!='\0')
        {
            frase[x]=frase[x]+2;
        }
    }
    printf("************************************************************************\n");
    printf("La nueva frase es: ",sum);
    printf("\n%s\n",frase);
    printf("************************************************************************\n");
}
void desEncriptar(){
    char frase[500];
    printf("Introduzca una frase a desencriptar: ");
    scanf("%s", &frase);
    int sum=0;
    int x;
    for(x = 0; x < 500; x++)
    {
        if (frase[x]!='\0')
        {
            frase[x]=frase[x]-2;
        }
    }
    printf("************************************************************************\n");
    printf("La nueva frase es: ",sum);
    printf("\n%s\n",frase);
    printf("************************************************************************\n");
}

int main() {
    menu();
    return 0;
}