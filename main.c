#include <stdio.h>
#include <string.h>

void NombrePropio(){
    char Cadena[1000];
    printf("Ingrese la palabra que desa convertir\n");
    fflush(stdin);
    fgets(Cadena,1000,stdin);
    for (int i = 0; i < strlen(Cadena); ++i) {
        int Ascci = Cadena[i];
        if (Cadena!=0){
            if (i==0  && (Ascci >= 97 && Ascci <=122)){
                Cadena[i] = Cadena[i]-32;
            }if (Ascci >= 65 && Ascci <=90 & i!=0  && Cadena[i-1]!= ' ') {
                Cadena[i] = Cadena[i]+32;
            }if ( Cadena[i+2]== ' ' && Cadena[i]==' ' && (Cadena[i+1]>='A' && Cadena[i+1]<='Z')){
                Cadena[i+1] = Cadena[i+1] + 32;
            }
            if ( Cadena[i+2]!= ' ' && Cadena[i]==' ' ){
                if ( Cadena[i] == ' '){
                    Ascci = Cadena[i+1];
                    if (Ascci>= 97 && Ascci <=122){
                        Cadena[i+1] = Cadena[i+1]-32;
                    }
                }
            }
        }
    }
    printf(    "La cadena convertida a nombre propio queda asi:\n-------------------------------------------------------------------------------------------------------------------\n%s------------------------------------------------------------------------------------------------------------------- \n" , Cadena);
}

void menu(){
    int option;
    while (option != 10){

        printf("Ingrese la opción deseada:\n1.Convertir en nombre propio\n"
               "2.Contar palabras en una cadena\n3.Encriptar cadena\n4.Desencriptar cadena"
               "\n5.Llenar caracteres\n6.Borrar caracteres\n7.Intersección\n8.Diferencia entre dos cadenas"
               "\n9.Borrar caracteres por izquierda o derecha\n10.Salir\n");

        scanf("%i",&option);

        switch (option) {

            case 1:
                NombrePropio();
                printf("\n");
                break;

            case 2:
                break;

            case 3:
                break;

            case 4:
                break;

            case 5:
                break;

            case 6:
                break;

            case 7:
                break;

            case 8:
                break;

            case 9:

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