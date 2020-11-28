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

                break;

            default :
                printf("Opción no valida");
                break;

        }
    }
}

int main() {
    char resultado[27]="";
    char palabra[50];
    int i=0,j=0;
    printf("Ingresa una frase!\n");scanf("%s",palabra);
    while(palabra[i])
    {
        if(!strchr(resultado,palabra[i]))
            resultado[j++]=palabra[i];
        i++;
    }
    resultado[j]='\0';
    printf("\nEl resultado seria!\n%s",resultado);

    getchar();
    return(0);
}