#include <stdio.h>
#include <string.h>

void contarPalabraEnCadena(){
    char palabra[1000];
    char cadena[1000];
    int contadorPrincipal=0;
    int contador=0;

    printf("Ingrese la palabra:\n");
    fflush(stdin);
    gets(palabra);

    printf("Ingrese la cadena a buscar:\n");
    fflush(stdin);
    gets(cadena);
    for (int i = 0; i < strlen(palabra); ++i) {

            for (int j = 0; j < strlen(cadena); ++j) {
                if (palabra[j+i]==cadena[j]||palabra[j+i]-32==cadena[j]||palabra[j+i]==cadena[j]-32){
                    contador++;
                }
            }

            if (contador==strlen(cadena)){
                contadorPrincipal++;
            }
        contador=0;

    }

    printf("La palabra se repite: %i\n", contadorPrincipal);
}

void borrarCaracter(){
        //ejercicios 6
    char palabra[1000],palabraModificada[1000]="";
    char caracter[1];
    int contador=0;



    printf("Ingrese la palabra\n");
    fflush(stdin);
    gets(palabra);
    printf("Ingrese el palabraDos a borrar\n");
    fflush(stdin);
    gets(caracter);

    for (int i = 0; i < strlen(palabra);i++) {

        if (palabra[i]!=0){
            if (palabra[i]!=caracter[0]&&(palabra[i]!=caracter[0]-32)) {
                palabraModificada[contador]=palabra[i];
                contador++;
            }
        }
    }

    printf("La palabra modificada es: %s\n", palabraModificada);

}

void diferenciaEntreCadenas(){

    char palabra[1000];
    char palabraDos[1000];
    int contador=0;
    int k=0;


    printf("Ingrese la cadena uno \n");
    fflush(stdin);
    gets(palabra);
    printf("Ingrese la cadena dos a comparar\n");
    fflush(stdin);
    gets(palabraDos);

    for (int i = 0; i < strlen(palabraDos);i++) {
        contador=0;
        for (int j = 0; j <strlen(palabra) ; ++j) {

                if (palabra[j]!=palabraDos[i]&&(palabra[j]!=palabraDos[i]-32)) {
                    palabra[contador]=palabra[j];
                    contador++;

                }else{
                    palabra[strlen(palabra)-k]=' ';
                    k++;
                }
        }
        k=0;
    }
    contador=0;
    char palabraFinal[1000]="";
    for (int i = 0; i < strlen(palabra); ++i) {
        if ((palabra[i]>='A'&&palabra[i]<='z')||palabra[i]==' '){
               palabraFinal[contador]=palabra[i];
               contador++;

        }
    }
    printf("La palabra modificada es: %s\n", palabraFinal);
}

void menu(){
    int option=0;
    while (option != 10){

        printf("Ingrese la opcion deseada:\n1.Convertir en nombre propio\n"
               "2.Contar palabras en una cadena\n3.Encriptar cadena\n4.Desencriptar cadena"
               "\n5.Llenar caracteres\n6.Borrar caracteres\n7.Intersección\n8.Diferencia entre dos cadenas"
               "\n9.Borrar caracteres por izquierda o derecha\n10.Salir\n");


        scanf("%i",&option);

        switch (option) {

            case 1:printf("eligio %i\n", option);
                break;

            case 2:contarPalabraEnCadena();
                break;

            case 3:printf("eligio %i\n", option);
                break;

            case 4:printf("eligio %i\n", option);
                break;

            case 5:printf("eligio %i\n", option);
                break;

            case 6:borrarCaracter();
                break;

            case 7:printf("eligio %i\n", option);
                break;

            case 8:diferenciaEntreCadenas();
                break;

            case 9:printf("eligio %i\n", option);
                break;

            case 10:

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