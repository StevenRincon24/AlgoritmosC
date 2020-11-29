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



void LlenarCaracteres(){
    fflush(stdin);
    int numeroRepeticiones = 0, sentido;
    char palabra[1000], caracter ;
    printf("Ingrese la cadena principal:\n");
    scanf("%[^\n]", & palabra);
    printf("ingrese el caracter: \n");
    fflush(stdin );
    scanf("%c" , &caracter);
    printf("ingrese el numero de repeticiones:\n");
    scanf("%d" , &numeroRepeticiones);
    printf("Ingrese el sentido que quiere anhadir los caracteres (1 Para derecha, 2 Para izquierda)\n");
    scanf("%d" , &sentido);
    char Repetidos[numeroRepeticiones + 1];

    for (int i = 0; i < numeroRepeticiones; ++i) {
        Repetidos[i] =  caracter;
    }
    printf("Repetidos %s\n", Repetidos);
    if (sentido==1){
        printf("\nLa palabra final queda asi: %s%s\n" , palabra, Repetidos);
    }else if (sentido == 2){

        printf("La palabra queda asi: %s%s\n" ,Repetidos, palabra);
    }
}

void eliminarCaracteresIzquierdaDerecha(){
    char  cadenaUno[1000], cadenaDos[1000];
    int poscion;
    printf("Ingrese la cadena Uno\n");
    fflush(stdin);
    gets(cadenaUno);
    printf("Ingrese la cadena Dos\n");
    gets(cadenaDos);
    printf("1. Para izquierda o 2. Para derecha\n");
    fflush(stdin);
    scanf("%i", &poscion);
    int posicionInicio=0;
    int condicion=0;
    if ( poscion == 1 ){
        for (int i = 0; i < strlen(cadenaUno); i++) {
            for (int j = 0; j < strlen(cadenaDos); ++j) {
                if (cadenaDos[j] == cadenaUno[i] || (cadenaDos[j]-32 == cadenaUno[i]) || (cadenaDos[j] == cadenaUno[i]-32) ||
                    (cadenaDos[j]== ' ' || cadenaUno[i]==' ')  ){
                    posicionInicio++;
                    cadenaUno[i] = ' ';
                    break;
                }if (j== strlen(cadenaDos) -1){
                    condicion = 1;
                    break;
                }
            } if (condicion ==1){
                break;
            }
        }
        char cadenaFinal[1000];
        int contador=0;
        for (int i = posicionInicio; i < strlen(cadenaUno); ++i) {
            cadenaFinal[contador] = cadenaUno[i];
            contador++;
        }
        printf("la cadena final queda de la siguiente manera: %s\n" , cadenaFinal);
    }else if ( poscion == 2 ){
        for (int i = strlen(cadenaUno)-1; i > 0; i--) {
            for (int j = 0; j < strlen(cadenaDos); ++j) {
                if (cadenaDos[j] == cadenaUno[i] || (cadenaDos[j]-32 == cadenaUno[i]) || (cadenaDos[j] == cadenaUno[i]-32) ||
                    (cadenaDos[j]== ' ' || cadenaUno[i]==' ')  ){
                    cadenaUno[i] = ' ';
                    break;
                }if (j== strlen(cadenaDos) -1){
                    condicion = 1;
                    break;
                }
            } if (condicion ==1){
                break;
            }
        }
        printf("La cadena queda asi: %s\n" , cadenaUno);
    }

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
                LlenarCaracteres();
                break;

            case 6:
                break;

            case 7:
                break;

            case 8:
                break;

            case 9:
                eliminarCaracteresIzquierdaDerecha();
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